#include <stdio.h>
#include <string.h>
#include <unistd.h>

void println(char * str) {
	printf("%s\n", str);
}

int main() {
	char* name = "Boluwatife";

	long int len = strlen(name);

	for (int i = 0; i < len; i++) {
		printf("%c", name[i]);
		fflush(stdout); // stdout is a buffered stream so flush the buffer to see the delay
		sleep(1);
	}

	printf("\n");
}
