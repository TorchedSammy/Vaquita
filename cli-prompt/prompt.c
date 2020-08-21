#include <stdio.h>
#include <stdlib.h>

int main() {
	char text[50];
    printf("> ");

    fgets(text, 50, stdin);
    printf("input: %s\n", text);

    return 0;
}