#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
	const int size = 256;
	printf("Please enter a string: ");
	char str[size];
	scanf("%255[^\n]", str);
	
	//Loop and build a string containing every second character
	char str2[size];
	int len = strlen(str);
	int j = 0;
	for(int i = 0; i < len; i = i + 2){
		str2[j] = str[i];
		j++;
	}
	str2[j] = '\0';
	printf("\nThe new String is: %s\n", str2);
	return 0;
}