/// ============================================================
/// FMOD Enums and Constants
/// ============================================================

/// Result Codes (Complete FMOD Error List)
enum FmodResult {
	Ok = 0,
	BadCommand = 1,
	ChannelAlloc = 2,
	ChannelStolen = 3,
	Dma = 4,
	DspConnection = 5,
	DspDontProcess = 6,
	DspFormat = 7,
	DspInUse = 8,
	DspNotFound = 9,
	DspReserved = 10,
	DspSilence = 11,
	DspType = 12,
	FileBad = 13,
	FileCouldNotSeek = 14,
	FileDiskEjected = 15,
	FileEof = 16,
	FileEndOfData = 17,
	FileNotFound = 18,
	FileUnwanted = 19,
	FormatUnsupported = 20,
	Generic = 21,
	InvalidHandle = 22,
	InvalidParam = 23,
	InvalidPosition = 24,
	InvalidSpeakerMode = 25,
	InvalidThread = 26,
	InvalidVector = 27,
	MaxAudioEngines = 28,
	Memory = 29,
	MemoryCantPoint = 30,
	Needs3D = 31,
	NeedsSoftware = 32,
	NetConnect = 33,
	NetSocketError = 34,
	NetUrl = 35,
	NetWouldBlock = 36,
	NotReady = 37,
	OutputAllocated = 38,
	OutputCreateBuffer = 39,
	OutputDriverCall = 40,
	OutputFormat = 41,
	OutputInit = 42,
	OutputNoDriver = 43,
	Record = 44,
	ReverseStereo = 45,
	Threading = 46,
	TooManyChannels = 47,
	TruncatedData = 48,
	Unimplemented = 49,
	Uninitialized = 50,
	Unsupported = 51,
	Update = 52,
	Version = 53,
	EventAlreadyLoaded = 54,
	InternalError = 55,
	InvalidSecret = 56,
	MissingCallback = 57,
	SampleMissing = 58,
	Plugin = 59,
	PluginMissing = 60,
	PluginResource = 61,
	PluginVersion = 62,
	ReverbChannelGroup = 63,
	ReverbInstance = 64,
	SubSounds = 65,
	SubSoundAllocated = 66,
	SubSoundCantMove = 67,
	TagNotFound = 68,
	Http = 69,
	HttpAccess = 70,
	HttpProxyAuth = 71,
	HttpServerError = 72,
	HttpTimeout = 73,
	InvalidFloat = 74,
	InvalidSyncPoint = 75,
	InvalidSpeaker = 76,
	InvalidString = 77,
	AlreadyLocked = 78,
	NotLocked = 79,
	RecordDisconnected = 80,
	TooManySamples = 81,
	StudioUninitialized = 82,
	StudioNotLoaded = 83,
	EventNotFound = 84,
	EventLiveUpdateBusy = 85,
	EventLiveUpdateMismatch = 86,
	EventLiveUpdateTimeout = 87,
	Format = 88,
	Initialization = 89,
	Initialized = 90,
	Internal = 91,
	MaxAudible = 92,
	NeedsHardware = 93,
}

/// Initialization Flags
enum FmodInitFlags {
	Normal = 0x00000000,
	StreamFromUpdate = 0x00000001,
	IgnoreTags = 0x00000002,
	SyncMixDown = 0x00000004,
	ProfileEnable = 0x00000010,
	Vol0BecomesVirtual = 0x00000020,
	GeometryUseCheap = 0x00000040,
	ClipOutput = 0x00000080,
	Unicode = 0x00000100,
	TimerTickBaseClockSource = 0x00000200,
	ProfileMeterAll = 0x00000400,
	MemoryTracking = 0x00000800,
	ThreadUnsafe = 0x00001000,
	ProfileMeterThreadLocks = 0x00002000,
}

/// Studio Initialization Flags
enum FmodStudioInitFlags {
	Normal = 0x00000000,
	LiveUpdate = 0x00000001,
	AllowMissingPlugins = 0x00000002,
	SynchronousUpdate = 0x00000004,
	DeferredCallbacks = 0x00000008,
	LoadFromUpdate = 0x00000010,
	DebugOverlay = 0x00000020,
	DisableSounds = 0x00000040,
	DisableAllSamples = 0x00000080,
	DisableCommandReplay = 0x00000100,
}

/// Sound Creation Modes
enum FmodMode {
	Default = 0x00000000,
	LoopOff = 0x00000001,
	LoopOn = 0x00000004,
	LoopBidi = 0x00000008,
	_2D = 0x00000010,
	_3D = 0x00000020,
	CreateStream = 0x00000080,
	CreateSample = 0x00000100,
	CreateCompressedSample = 0x00000200,
	OpenUser = 0x00000400,
	OpenMemory = 0x00000800,
	OpenMemoryPoint = 0x10000000,
	OpenRaw = 0x00001000,
	OpenOnly = 0x00002000,
	AccurateTime = 0x00004000,
	MpegSearch = 0x00008000,
	NonBlocking = 0x00010000,
	Unique = 0x00020000,
	_3DHeadRelative = 0x00040000,
	_3DWorldRelative = 0x00080000,
	_3DInverseRollOff = 0x00100000,
	_3DLinearRollOff = 0x00200000,
	_3DLinearSquareRollOff = 0x00400000,
	_3DCustomRollOff = 0x04000000,
	_3DIgnoreGeometry = 0x40000000,
	IgnoreTags = 0x02000000,
	LowMem = 0x08000000,
	VirtualPlayFromStart = 0x80000000,
}

/// Time Units
enum FmodTimeUnit {
	Ms = 0x00000001,
	Pcm = 0x00000002,
	PcmBytes = 0x00000004,
	RawBytes = 0x00000008,
	PcmFraction = 0x00000010,
	ModOrder = 0x00000100,
	ModRow = 0x00000200,
	ModPattern = 0x00000400,
}

/// DSP Types
enum FmodDspType {
	Unknown = -1,
	Mixer = 0,
	Oscillator = 1,
	LowPass = 2,
	ItLowPass = 3,
	HighPass = 4,
	Echo = 5,
	Flange = 6,
	Distortion = 7,
	Normalize = 8,
	Limiter = 9,
	ParamEq = 10,
	PitchShift = 11,
	Chorus = 12,
	VstPlugin = 13,
	WinampPlugin = 14,
	Convolution = 15,
	ChannelMix = 16,
	Transceiver = 17,
	ObjectPan = 18,
	MultibandEq = 19,
	CompDynEq = 20,
}

/// DSP Connection Types
enum FmodDspConnectionType {
	Default = 0,
	Dry = 1,
	Wet = 2,
}

/// Debug Flags
enum FmodDebugFlags {
	LevelNone = 0x00000000,
	LevelError = 0x00000001,
	LevelWarning = 0x00000002,
	LevelLog = 0x00000004,
	TypeMemory = 0x00000100,
	TypeFile = 0x00000200,
	TypeCodec = 0x00000400,
	TypeTrace = 0x00000800,
	DisplayTimeStamps = 0x00010000,
	DisplayLineNumbers = 0x00020000,
	DisplayCompress = 0x00040000,
	DisplayThreadId = 0x00080000,
	DisplayModule = 0x00100000,
	DisplaySourceCodeLine = 0x00200000,
}

/// Debug Modes
enum FmodDebugMode {
	Tty = 0,
	File = 1,
	Callback = 2,
	FilePlusTty = 3,
}

/// Speaker Modes
enum FmodSpeakerMode {
	Default = 0,
	Raw = 1,
	Mono = 2,
	Stereo = 3,
	Quad = 4,
	Surround = 5,
	_5Point1 = 6,
	_7Point1 = 7,
	_7Point1PointFront = 8,
	_5Point1Rears = 9,
}

/// Sound Types
enum FmodSoundType {
	Unknown = 0,
	Aiff = 1,
	Asf = 2,
	Dsd = 3,
	Flac = 4,
	Fsb = 5,
	It = 6,
	Midi = 7,
	Mpeg = 8,
	OggVorbis = 9,
	Playlist = 10,
	Raw = 11,
	S3m = 12,
	User = 13,
	Wav = 14,
	Xm = 15,
	Xwm = 16,
	Ac3 = 17,
	At9 = 18,
	Vorbis = 19,
	MediaFoundation = 20,
	MediaCodec = 21,
	Fadpcm = 22,
	Opus = 23,
}

/// Sound Formats
enum FmodSoundFormat {
	None = 0,
	Pcm8 = 1,
	Pcm16 = 2,
	Pcm24 = 3,
	Pcm32 = 4,
	PcmFloat = 5,
	BitStream = 6,
}

/// Output Types
enum FmodOutputType {
	AutoDetect = 0,
	Unknown = 1,
	NoSound = 2,
	WavWriter = 3,
	NoSoundNrt = 4,
	WavWriterNrt = 5,
	Wasapi = 6,
	Asio = 7,
	PulseAudio = 8,
	Alsa = 9,
	CoreAudio = 10,
	AudioTrack = 11,
	OpenSl = 12,
	AudioOut = 13,
	Audio3D = 14,
	WebAudio = 15,
	NnAudio = 16,
	WinSonic = 17,
	AAudio = 18,
	NativeAudio = 19,
}

/// Studio Loading State
enum FmodStudioLoadingState {
	Unloading = 0,
	Unloaded = 1,
	Loading = 2,
	Loaded = 3,
	Error = 4,
}

/// Studio Playback State
enum FmodStudioPlaybackState {
	Playing = 0,
	Sustaining = 1,
	Stopped = 2,
	Starting = 3,
}

/// Studio Stop Mode
enum FmodStudioStopMode {
	AllowFadeOut = 0,
	Immediate = 1,
}

/// Studio Event Property
enum FmodStudioEventProperty {
	ChannelPriority = 0,
	ScheduleDelay = 1,
	ScheduleLookAhead = 2,
	MinimumDistance = 3,
	MaximumDistance = 4,
	CoolDown = 5,
}

/// Studio Parameter Flags
enum FmodStudioParameterFlags {
	ReadOnly = 0x00000001,
	Automatic = 0x00000002,
	Interactive = 0x00000004,
	Labeled = 0x00000008,
}

/// Studio User Property Type
enum FmodStudioUserPropertyType {
	String = 0,
	Integer = 1,
	Float = 2,
	Boolean = 3,
}
