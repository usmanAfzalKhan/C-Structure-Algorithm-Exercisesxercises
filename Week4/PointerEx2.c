#include <stdio.h>

int main(int argc, char** argv){

	int num = 36;
	int* ptr = &num;
	*ptr = num + 1;
	printf("Printing Num %d\n", num);	
	*ptr = (*ptr) * (*ptr);
	printf("Printing Squared Num %d\n", *&num);	
	return 0;
}
