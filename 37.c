#include <stdio.h>

int main() {
   int arr[] = {16, 18, 27, 16, 23, 21, 19};
   int n = sizeof(arr) / sizeof(arr[0]); // get the size of array
   int sum = 0; // initialize sum to zero
   float average; // define a variable for average as a float type
   
   // calculate sum of elements
   for(int i = 0; i < n; i++) {
      sum += arr[i];
   }

   // calculate average of elements
   average = (float) sum / n;
   
   // print sum and average
   printf("Sum of array elements: %d\n", sum);
   printf("Average of array elements: %.2f\n", average);
   
   return 0;
}
