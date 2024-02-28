#include <stdio.h>

int main(int argc, char ** argv) {
	const int numValues = 30;
	int values[numValues];
	for (int index = 0; index < numValues; index++) {
		values[index] = 999;
	}
	
/*	for (int index = 0; index < numValues; index++) {
		printf("%d: %d\n", index, values[index]);
	}*/
	
	printf("%d\n", values[-100000]);
}