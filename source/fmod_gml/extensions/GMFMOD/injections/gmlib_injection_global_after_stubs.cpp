struct GMRTRunnerInterface
{
    const char* (*ExtOptGetString)(const char* _ext, const char* _opt);
};
void Init_GMFMOD()
{
    GMRTRunnerInterface ri;
    ri.ExtOptGetString = &ExtensionOptions_GetValue;

    using FunctionPointer = void (*)(GMRTRunnerInterface*, size_t);
    FunctionPointer fnHandle = nullptr;
    void* libHandle = nullptr;

    libHandle = ExtUtils_GetLibraryHandle("GMFMOD.ext");
    if (libHandle)
    {
        fnHandle = (FunctionPointer)SharedLibrary_GetFunctionAddress(libHandle, "GMExtensionInitialise");
        if (fnHandle) fnHandle(&ri, sizeof(GMRTRunnerInterface));
    }
}
void Startup_GMFMOD()
{
    if (isInitialized) return;

    using FunctionPointer = void (*)();
    FunctionPointer fnHandle = nullptr;
    void* libHandle = nullptr;

    isInitialized = true;
}
void Shutdown_GMFMOD()
{
    if (!isInitialized) return;

    using FunctionPointer = void (*)();
    FunctionPointer fnHandle = nullptr;
    void* libHandle = nullptr;

    libHandle = ExtUtils_GetLibraryHandle("GMFMOD.ext");
    if (libHandle)
    {
        fnHandle = (FunctionPointer)SharedLibrary_GetFunctionAddress(libHandle, "__EXT_NATIVE__fmod_shutdown");
        if (fnHandle) fnHandle();
    }
    isInitialized = false;
}
