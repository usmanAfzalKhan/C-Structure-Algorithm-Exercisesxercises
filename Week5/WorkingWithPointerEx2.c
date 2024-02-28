#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
	const int size = 256;
	printf("Please enter a string: ");
	char str[size];
	scanf("%s", str);
	
	//Loop and print every second character
	int len = strlen(str);
	for(int i = 0; i < len; i = i + 2){
		printf("%c", str[i]);
	}
	return 0;
}