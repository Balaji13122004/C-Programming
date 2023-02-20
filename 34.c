#include <stdio.h>

int main() {
    int m, n, i;

    printf("Enter a number to print the multiplication table: ");
    scanf("%d", &m);

    printf("Enter the number of terms to print: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d x %d = %d\n", i, m, i * m);
    }

    return 0;
}
