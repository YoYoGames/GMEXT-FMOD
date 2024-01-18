

if (USE_FMOD_STUDIO) {
	/*
		If you are only using Studio you need this.
	*/
	fmod_studio_system_update(); 
}
else {
	/*
		If you are only using Core you only need this.
	*/
	fmod_system_update();
}
