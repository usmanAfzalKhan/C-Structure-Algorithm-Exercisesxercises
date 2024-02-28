#include <stdio.h>

int main(int argc, char** argv) {
	char str[100] = "Today is the day!";
	char* pos = str;
	while (*pos != '\0') {
		printf("%c %p\n", *pos++);
	}
}
