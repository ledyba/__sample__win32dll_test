#include <windows.h>
#include <stdio.h>
#include <libmodplug/modplug.h>

int main () {
	/*Typedef the hello function*/
	HMODULE hdll = LoadLibrary("test.dll");
	void* a = ModPlug_Load("aaa", 10);
	
	/*A pointer to a function*/
	int(*hello)(void) = (int(*)(void)) GetProcAddress(hdll, "function");
	try {
		printf("throwing...");
		throw 1;
	} catch (...) {
		printf("ok.\n");
	}
	
	hello();
	return 0;
}