#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	//Create an array of integers using array
	const int size = 1000;
	int * arr = malloc(size * sizeof(int));
	
	//Fill the array
	for(int i = 0; i < size; i++){
		arr[i] = i + 1;
	}
	
	//Print the array contents
	for(int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	
	free(arr);
	
}