#include <stdio.h>

int main(int argc, char const *argv[]) {
	if (argc < 2) {
		printf("Hello world!\n");
	} else {
		printf("Hello %s!\n", argv[1]);
	}
}
