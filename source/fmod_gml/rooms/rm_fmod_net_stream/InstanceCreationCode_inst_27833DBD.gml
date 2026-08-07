
// Pausing the stream is a plain Core channel operation, so it works whether or
// not Studio is initialised — nothing here to gate on USE_FMOD_STUDIO.
locked = false;