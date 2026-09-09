package ${YYAndroidPackageName};
import java.lang.String;
import java.nio.ByteBuffer;

public final class GMFMOD extends GMFMODInternal {
    static {
        // libfmodL.so is only a DT_NEEDED dependency of libGMFMOD.so, and Android does not run
        // JNI_OnLoad for linker-resolved dependencies. Load it from Java so FMOD's own JNI_OnLoad
        // runs and captures the JavaVM it needs to reach org.fmod.MediaCodec and org.fmod.AudioDevice.
        try {
            System.loadLibrary("fmodL");
        } catch (UnsatisfiedLinkError e) {
            // EXT_TP_FMOD_USE_LOGGING=OFF ships the non-logging build under the plain name.
            System.loadLibrary("fmod");
        }
    }

    public GMFMOD() {
        org.fmod.FMOD.init(RunnerActivity.CurrentActivity);
    }

    public void onStart() {
        __EXT_NATIVE__fmod_system_mixer_resume();
    }

    public void onStop() {
        __EXT_NATIVE__fmod_system_mixer_suspend();
    }

    public void onDestroy() {
        __EXT_NATIVE__fmod_system_mixer_resume();
        org.fmod.FMOD.close();
    }
}
