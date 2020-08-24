#include <stdio.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include "spinner.h"

int main() {
	char* lol = "lol\0";

	int i = 1;
	while (i++) {
		#ifdef _WIN32
		Sleep(80);
		#else
		nanosleep(80*1000);
		#endif
		next_frame(lol, i % 4);
	}

	return 0;
}