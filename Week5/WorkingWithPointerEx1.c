#include <stdio.h>

void increment(int num) {
	num = num + 1;
}
void increment2(int* num) {
	*num = *num + 1;
}

int main(int argc, char** argv) {
	int num = 0;
	
	increment(num);
	printf("After calling increment num is %d\n", num); //Doesn't work because its call by value and num is a copy
	
	increment2(&num);
	printf("After calling increment2 num is %d\n", num); //Works because its call by reference
}
