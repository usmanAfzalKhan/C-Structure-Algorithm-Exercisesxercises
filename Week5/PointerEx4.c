#include <stdio.h>

int main(int argc, char** argv){

int count = 10;
int* temp;
int sum = 0;
temp = &count;
*temp = 20;
temp = &sum;
*temp = count;
printf("count = %d, *temp = %d, sum = %d, temp[0] = %d\n", count, *temp, sum, temp[0]);
}
