#include <stdio.h>

// Function to find the largest element in an array
int findLargestElement(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[100], n, largest;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest = findLargestElement(arr, n);
    printf("The largest element in the array is %d", largest);
    return 0;
}
