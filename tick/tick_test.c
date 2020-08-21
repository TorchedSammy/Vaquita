#include <stdio.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int main() {
	int i;
	for (;;) {
		#ifdef _WIN32
		Sleep(80);
		#else
		nanosleep(80*1000);
		#endif
		printf("\e[69420D%d tick", i);
		i++;
	}

	return 0;
}