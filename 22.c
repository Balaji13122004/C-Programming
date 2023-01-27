#include <stdio.h>

int main() {
    int n, i;
    int max, min;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("Maximum of an array: %d\n", max);
    printf("Minimum of an array: %d\n", min);

    return 0;
}
