#include <stdio.h>

void addNumbers(int *a, int *b, int *sum) {
    *sum = *a + *b;
}

int main() {
    int a, b, sum;

    printf("Input the first number: ");
    scanf("%d", &a);
    printf("Input the second number: ");
    scanf("%d", &b);

    addNumbers(&a, &b, &sum);
    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}
