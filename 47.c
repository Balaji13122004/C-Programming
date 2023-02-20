#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {16, 18, 27, 16, 23, 21, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 23;
    int pos = binarySearch(arr, 0, n - 1, key);
    if (pos == -1) {
        printf("Element not found.\n");
    } else {
        printf("Element found at position %d.\n", pos);
    }
    return 0;
}
