#include <stdio.h>

int main(int argc, char** argv){

	int num = 36;
	int* ptr = &num;
	printf("num is %d\n", ptr);	
	printf("ptr is %p\n", ptr);
	int num2 = num + 1;
	int* ptr2 = ptr + 1;
	printf("num2 is %d\n", num2);	
	printf("ptr2 is %p\n", ptr2);	
	return 0;
}
