#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    int size1, size2, mergeSize;
    int i, j;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter the elements of the first array:\n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    printf("Enter the elements of the second array:\n");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    mergeSize = size1 + size2;

    // Copy elements of the first array to merged array
    for (i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements of the second array to merged array
    for (i = 0, j = size1; i < size2; i++, j++) {
        merged[j] = arr2[i];
    }

    printf("The merged array is:\n");
    for (i = 0; i < mergeSize; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
