#include <stdio.h>

int main() {
  int n, i, pos, value;
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  int arr[n+1];

  printf("Enter the elements of the array: \n");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Enter the position where you want to insert the element: ");
  scanf("%d", &pos);
  printf("Enter the value to be inserted: ");
  scanf("%d", &value);

  // shift elements to the right
  for (i = n; i >= pos; i--) {
    arr[i] = arr[i-1];
  }

  // insert the value at the specified position
  arr[pos-1] = value;

  printf("Array after insertion: ");
  for (i = 0; i < n+1; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
