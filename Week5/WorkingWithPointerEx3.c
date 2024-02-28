#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	char str[100] = "Today is the day!";
	char* pos = str;
	char* pos2 = str + strlen(str) - 1;
	while (*pos2 != '\0'){
		printf("%c %c\n", *pos++,*pos2--);
	}
}
