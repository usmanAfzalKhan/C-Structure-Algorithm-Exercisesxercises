#include <stdio.h>

void powers(double num, double* square, double* cube){
	*square = num * num;
	*cube = *square * num;
}


int main(int argc, char** argv){
	double square = 0;
	double cube = 0;
   	powers(3.2, &square, &cube); //& makes pointer
   	printf("The square is %lf and the cube is %lf\n", square, cube);
	
	return 0;
}