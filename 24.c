#include <stdio.h>

void swap(int *a, int *b, int *c) {
    int temp = *a;
    *a = *c;
    *c = temp;
}

int main() {
    int a = 5, b = 6, c = 7;
    printf("The value before swapping are:\n");
    printf("Element 1 = %d\n", a);
    printf("Element 2 = %d\n", b);
    printf("Element 3 = %d\n", c);
    swap(&a, &b, &c);
    printf("The value after swapping are:\n");
    printf("Element 1 = %d\n", a);
    printf("Element 2 = %d\n", b);
    printf("Element 3 = %d\n", c);
    return 0;
}
