#include <stdio.h>

int main() {
    int arr[100], n, m, max, min, temp, i, j;

    // get size of array
    printf("Enter the size of array: ");
    scanf("%d", &n);

    // get elements of array
    printf("Enter %d elements of array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // get Mth maximum number
    printf("Enter value of M: ");
    scanf("%d", &m);
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        if (i == m-1) {
            max = arr[i];
            break;
        }
    }

    // get Nth minimum number
    printf("Enter value of N: ");
    scanf("%d", &m);
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        if (i == m-1) {
            min = arr[i];
            break;
        }
    }

    // calculate sum and difference
    int sum = max + min;
    int diff = max - min;

    // display results
    printf("Mth maximum number is: %d\n", max);
    printf("Nth minimum number is: %d\n", min);
    printf("Sum of Mth maximum and Nth minimum number is: %d\n", sum);
    printf("Difference between Mth maximum and Nth minimum number is: %d\n", diff);

    return 0;
}
