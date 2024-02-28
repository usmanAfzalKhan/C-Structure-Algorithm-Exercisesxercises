#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
	
	printf("Please enter a string: ");
	char str[256] = "";
	scanf("%s", str);
	if(strcmp(str, "Usman") == 0){//strcasecmp
		printf("Yes");
	}
	else{
		printf("No");
	}
	char str2[256] = "";
	strcpy(str2, str);
	if(strcmp(str, str2) == 0){
		printf("\nCopy is correct");
	}
	else{
		printf("\nCopy is incorrect");
	}
	
	return 0;
}