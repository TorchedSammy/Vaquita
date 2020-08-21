#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void next_frame(char *str, int step) {
	char spinner[4];
	spinner[0] = '-';
	spinner[1] = '\\';
	spinner[2] = '|';
	spinner[3] = '/';

	printf("\e[69420D%c %s", spinner[step], str);
}
