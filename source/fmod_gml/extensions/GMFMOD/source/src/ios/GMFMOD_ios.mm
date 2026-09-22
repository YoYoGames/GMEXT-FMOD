#import "GMFMOD_ios.h"

#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>

#include <native/GMFMODInternal_native.h>

// FMOD leaves the audio session to the host on iOS and tvOS: the mixer is
// suspended across an interruption, resumed once the session can be activated
// again, and reset - a suspend/resume pair - when the media services restart.
// This follows the observers on FMOD's iOS platform page. The runner owns the
// session's category and its own activation; nothing here configures it.
//
// Every block runs on the main queue, which is the runner's game thread, so a
// suspend and its resume land on the thread GML calls FMOD from - the rule the
// page states for the pair.

static bool g_is_suspended = false;
static bool g_needs_reset = false;
// Bumped whenever the state moves on, so an activation retry chain started
// under an older state stops itself.
static unsigned g_generation = 0;
static bool g_observers_registered = false;
static id g_observers[4];

static void gmfmod_suspend()
{
	if (g_is_suspended)
		return;
	fmod_lifecycle_suspend();
	g_is_suspended = true;
}

static void gmfmod_resume()
{
	if (!g_is_suspended)
		return;
	fmod_lifecycle_resume();
	g_is_suspended = false;
}

// The delayed suspend-in-background notification: the session was deactivated
// while the app was in the background and iOS reports it on relaunch. FMOD's
// example ignores it, by whichever key the OS version carries.
static bool gmfmod_is_delayed_interruption(NSNotification* notification)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
	if (@available(iOS 16.0, tvOS 14.5, *))
	{
		// Delayed suspend-in-background notifications no longer exist.
		return false;
	}
#if !TARGET_OS_TV
	if (@available(iOS 14.5, *))
	{
		return [[notification.userInfo valueForKey:AVAudioSessionInterruptionReasonKey] intValue] == AVAudioSessionInterruptionReasonAppWasSuspended;
	}
#endif
	return [[notification.userInfo valueForKey:AVAudioSessionInterruptionWasSuspendedKey] boolValue];
#pragma clang diagnostic pop
}

// Activate the session and wake the mixer, from interruption-ended and from
// did-become-active. Screen Time can hold the session with no
// interruption-ended to follow; FMOD's example polls setActive at 20 ms until
// it succeeds, and this does the same from the main queue instead of blocking
// it. Any other failure is Siri and the like: the next notification retries.
static void gmfmod_activate_and_resume(unsigned generation)
{
	if (generation != g_generation || !g_is_suspended)
		return;

	NSError* error = nil;
	if ([[AVAudioSession sharedInstance] setActive:YES error:&error])
	{
		gmfmod_resume();
		return;
	}

	if ([error code] == AVAudioSessionErrorCodeCannotStartPlaying)
	{
		dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(20 * NSEC_PER_MSEC)), dispatch_get_main_queue(), ^{
			gmfmod_activate_and_resume(generation);
		});
		return;
	}

	NSLog(@"GMFMOD: AVAudioSession setActive failed, waiting for the next notification: %@", error);
}

static void gmfmod_register_observers()
{
	if (g_observers_registered)
		return;
	g_observers_registered = true;

	NSNotificationCenter* center = [NSNotificationCenter defaultCenter];
	NSOperationQueue* main = [NSOperationQueue mainQueue];

	g_observers[0] = [center addObserverForName:AVAudioSessionInterruptionNotification object:nil queue:main usingBlock:^(NSNotification* notification) {
		AVAudioSessionInterruptionType type = (AVAudioSessionInterruptionType)[[notification.userInfo valueForKey:AVAudioSessionInterruptionTypeKey] unsignedIntegerValue];
		if (type == AVAudioSessionInterruptionTypeBegan)
		{
			if (gmfmod_is_delayed_interruption(notification))
				return;
			++g_generation;
			gmfmod_suspend();
		}
		else if (type == AVAudioSessionInterruptionTypeEnded)
		{
			gmfmod_activate_and_resume(++g_generation);
		}
	}];

	// FMOD's threads keep running in the background otherwise, behind the
	// session the runner deactivates a moment later; Android's onStop does
	// the same.
	g_observers[1] = [center addObserverForName:UIApplicationDidEnterBackgroundNotification object:nil queue:main usingBlock:^(NSNotification* notification) {
		(void)notification;
		++g_generation;
		gmfmod_suspend();
	}];

	g_observers[2] = [center addObserverForName:UIApplicationDidBecomeActiveNotification object:nil queue:main usingBlock:^(NSNotification* notification) {
		(void)notification;
		if (g_needs_reset)
		{
			// A media-services reset arrived in the background; the pair that
			// rebuilds the audio unit completes with the resume below.
			gmfmod_suspend();
			g_needs_reset = false;
		}
		gmfmod_activate_and_resume(++g_generation);
	}];

	g_observers[3] = [center addObserverForName:AVAudioSessionMediaServicesWereResetNotification object:nil queue:main usingBlock:^(NSNotification* notification) {
		(void)notification;
		if ([UIApplication sharedApplication].applicationState == UIApplicationStateBackground || g_is_suspended)
		{
			g_needs_reset = true;
		}
		else
		{
			// In the foreground but something chopped the media services.
			gmfmod_suspend();
			gmfmod_resume();
		}
	}];
}

static void gmfmod_unregister_observers()
{
	if (!g_observers_registered)
		return;
	NSNotificationCenter* center = [NSNotificationCenter defaultCenter];
	for (id observer : g_observers)
	{
		if (observer != nil)
			[center removeObserver:observer];
	}
	g_observers_registered = false;
}

@implementation GMFMOD

// The runner creates one instance per extension class at launch, on the main
// thread, and keeps it for the life of the process.
- (instancetype)init
{
	self = [super init];
	if (self != nil)
		gmfmod_register_observers();
	return self;
}

// ARC (the build sets CLANG_ENABLE_OBJC_ARC), so no [super dealloc].
- (void)dealloc
{
	gmfmod_unregister_observers();
}

@end
