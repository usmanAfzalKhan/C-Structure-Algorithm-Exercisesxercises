#include <stdio.h>

void bubbleSort(int arr[], int size);

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
    bubbleSort(arr, size);
}

void bubbleSort(int arr[], int size)
{
  int i, j, temp;

  for (i = (size - 1); i > 0; i--)
  {
    for (j = 1; j <= i; j++)
    {
      if (arr[j-1] > arr[j])
      {
        temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
      }
    }
  }
  
  printf("Sorted Array: ");
  
  for(int i = 0; i < size; i++){
  	printf("%d ", arr[i]);
  }
  
  double median;
  if(size % 2){
  	median = arr[size/2];
  	printf("\nMedian: %g", median);
  }
  else{
  	median = (arr[size/2 - 1] + arr[size/2] /2.0);
  	printf("\nMedian: %g", median);
  }
}