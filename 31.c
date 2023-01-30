
#include <stdio.h>

void findFactorial(int *num, int *result) {
    int i;

    *result = 1;
    for (i = 1; i <= *num; i++) {
        *result = *result * i;
    }
}

int main() {
    int num, result;

    printf("Input a number: ");
    scanf("%d", &num);

    findFactorial(&num, &result);
    printf("The Factorial of %d is : %d\n", num, result);

    return 0;
}
