#include <stdio.h>

int main(int argc, char** argv) {
	printf("Please enter a floating-point value and exponent: ");
	double num = 0;
	int exp = 0;
	scanf("%lf%d", &num , &exp);
	double result = 1;
	for(int i = 0; i < exp; i++){
		result *= num;
	}
	printf("The number %g raised to power %d is %g\n", num, exp, result);
	return 0;
}
