#include <stdio.h>

#ifdef WIN32
#define DLLEXPORT extern "C" __declspec(dllexport)
#else
#define DLLEXPORT
#endif

//---------------------------------------------------------------------------------------------------------------------

DLLEXPORT int function()
{
	try{
		printf("sss\n");
		throw 1;
	}catch(...){
		printf("caucht\n");
		return 0;
	}
	printf("end\n");
	fflush(stdout);
	return 0;
}

