package ${YYAndroidPackageName};
import java.lang.String;
import java.nio.ByteBuffer;

public final class GMFMOD extends GMFMODInternal {
    static {
        // libfmod.so is only a DT_NEEDED dependency of libGMFMOD.so. The linker maps it, but
        // Android runs JNI_OnLoad only for libraries loaded through System.loadLibrary, so FMOD's
        // own JNI_OnLoad - the thing that captures the JavaVM it needs to reach
        // org.fmod.MediaCodec and org.fmod.AudioDevice - never fires without this call.
        //
        // The name is fixed, not probed. It has to match the DT_NEEDED recorded in libGMFMOD.so:
        // loading a different FMOD build here would put a second copy of FMOD Core in the process.
        System.loadLibrary("fmod");
    }

    public GMFMOD() {
        org.fmod.FMOD.init(RunnerActivity.CurrentActivity);
    }

    // The runner pauses the game thread in onPause, before these reach us, and
    // wakes it in onResume, after onStart - so every system is parked and woken
    // with no GML step in flight, on this one thread, as FMOD requires. The
    // lifecycle pair acts on every registered system and writes no status
    // slot; fmod_system_mixer_suspend/resume stay the game's own.
    public void onStart() {
        __EXT_NATIVE__fmod_lifecycle_resume();
    }

    public void onStop() {
        __EXT_NATIVE__fmod_lifecycle_suspend();
    }

    public void onDestroy() {
        __EXT_NATIVE__fmod_lifecycle_resume();
        org.fmod.FMOD.close();
    }
}
