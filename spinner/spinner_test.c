#include <stdio.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include "spinner.h"

int main() {
	char lol[4];
	lol[0] = 'l';
	lol[1] = 'o';
	lol[2] = 'l';
	lol[3] = '\0';

	int i;
	for (;;) {
		#ifdef _WIN32
		Sleep(80);
		#else
		nanosleep(80*1000);
		#endif
		next_frame(lol, i % 4);
		i++;
	}

	return 0;
}