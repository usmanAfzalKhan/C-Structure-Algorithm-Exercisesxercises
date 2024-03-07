#include <stdio.h>

#define SIZE 5
int arr[SIZE];

int main(int argc, char** argv) {
    // Input enough numbers to fill the array
    printf("Please enter %d integers: ", SIZE);
    for (int i = 0; i < SIZE; i++) {
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }
    
    printf("You entered ");
    for (int i = 0; i < SIZE; i++) {
        if (i > 0) {
            printf(", ");
        }
        printf("%d", arr[i]);
    }
    
    // Calculate and print statistics
    int total = 0;
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < SIZE; i++) {
        total += arr[i];
        
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("\nThe average is %g\n", (double)total/SIZE);
    printf("The highest number is %d\n", max);
    printf("The lowest number is %d\n", min);
}