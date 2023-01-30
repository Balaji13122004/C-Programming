#include <stdio.h>
#define MAX_ELEMENTS 10

int main() {
  int n, i, sum = 0;
  int arr[MAX_ELEMENTS];
  int *ptr;

  printf("Input the number of elements to store in the array (max 10): ");
  scanf("%d", &n);

  printf("Input %d elements in the array: \n", n);
  for (i = 0; i < n; i++) {
    printf("element - %d : ", i + 1);
    scanf("%d", &arr[i]);
  }

  ptr = arr;
  for (i = 0; i < n; i++) {
    sum += *ptr;
    ptr++;
  }

  printf("The sum of array is: %d\n", sum);

  return 0;
}
