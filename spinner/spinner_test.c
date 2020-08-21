#include <stdio.h>
#include "spinner.h"

int main() {
	char lol[4];
	lol[0] = 'l';
	lol[1] = 'o';
	lol[2] = 'l';
	lol[3] = '\0';

	int i;
	for (;;) {
		next_frame(lol, i % 4);
		i++;
	}

	return 0;
}