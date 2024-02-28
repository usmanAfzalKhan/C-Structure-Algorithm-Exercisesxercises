#include <stdio.h>

double ave(int num1, int num2, int num3) {
    double average = (num1 + num2 + num3) / 3.0;
    printf("The average of three numbers is: %g\n", average);
}

int main(int argc, char** argv) {
	int num1, num2, num3;
	printf("Enter three 3 numbers: \n");
	scanf("%d%d%d", &num1, &num2, &num3);
    ave(num1, num2, num3);
    return 0;
}
