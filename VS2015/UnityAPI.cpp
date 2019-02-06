#define CHATSCRIPTAPI __declspec(dllexport)

#include "../SRC/common.h"

extern "C"
{
	CHATSCRIPTAPI unsigned int chatscript_init_sys(int argc, char * argv[], char* unchangedPath, char* readonlyPath, char* writablePath)
	{
		return InitSystem(argc, argv, unchangedPath, readonlyPath, writablePath);
	}

	CHATSCRIPTAPI void chatscript_init_standalone()
	{
		InitStandalone();
	}

	CHATSCRIPTAPI void chatscript_perform_chat(char* user, char* usee, char* incoming, char* ip, char* buffer)
	{
		PerformChat(user, usee, incoming, ip, buffer);
	}

	CHATSCRIPTAPI void chatscript_close()
	{
		CloseSystem();
	}
}