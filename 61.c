#include <stdio.h>

int main() {
    int array[10] = {1, -2, 3, -4, 5, -6, 7, -8, 9, -10};
    int i, count = 0;

    for (i = 0; i < 10; i++) {
        if (array[i] < 0) {
            count++;
        }
    }

    printf("The number of negative numbers in the array is %d.\n", count);

    return 0;
}
