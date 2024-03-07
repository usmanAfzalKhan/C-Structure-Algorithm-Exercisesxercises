#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	//Create an array of integers using array
    int size = 1000;
	double * arr = malloc(size * sizeof(double));
	
	//Fill the array
	for(int i = 0; i < size; i++){
		arr[i] = i + 1;
	}
	
	//Print the array contents
	for(int i = 0; i < size; i++){
		printf("%g ", arr[i]);
	}
	
	int oldSize = size;
	size = size * 2;
	arr = realloc(arr, size * sizeof(double));
	
	// Flill the new part of the array with descending numbers
	for(int i = oldSize; i < size; i++){
		arr[i] = size - i - 1;
	}
	
	//Print the array contents
	for(int i = 0; i < size ; i++){
		printf("%g ", arr[i]);
	}
	
	free(arr);
}