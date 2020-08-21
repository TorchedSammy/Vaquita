#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
	if (argc < 2) {
		printf("Hello world!\n");
	} else {
		if (strcmp(argv[1], "--no") == 0) {
			printf("Hello %s\n", argv[2]);
		} else {
			printf("Hello %s!\n", argv[1]);
		}
	}
}
