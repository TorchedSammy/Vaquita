#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void next_frame(char *str, int step) {
	const char spinner[] = "-\\|/";

	printf("\e[69420D%c %s", spinner[step], str);
}
