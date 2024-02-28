#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	//Create an array of integers using array
	const int size = 1000;
	double * arr = malloc(size * sizeof(double));
	
	//Fill the array
	for(int i = 0; i < size; i++){
		arr[i] = (i + 1)/10.0;
	}
	
	//Print the array contents
	for(int i = 0; i < size; i++){
		printf("%g ", arr[i]);
	}
	
	free(arr);
}