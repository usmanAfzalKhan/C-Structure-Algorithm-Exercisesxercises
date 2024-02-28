#include <stdio.h>

int main(int argc, char** argv) {
    const int size = 5;
    int arr[size];
    
    // Input enough numbers to fill the array
    printf("Please enter %d integers: ", size);
    for (int i = 0; i < size; i++) {
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }
    
    printf("You entered ");
    for (int i = 0; i < size; i++) {
        if (i > 0) {
            printf(", ");
        }
        printf("%d", arr[i]);
    }
    
    // Calculate and print statistics
    int total = 0;
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        total += arr[i];
        
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("\nThe average is %g\n", (double)total/size);
    printf("The highest number is %d\n", max);
    printf("The lowest number is %d\n", min);
}