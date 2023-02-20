#include <stdio.h>

int main() {
    int A, m, n, o, i;
    printf("Enter the limit A: ");
    scanf("%d", &A);
    printf("Pythagorean triples with value smaller than %d:\n", A);
    for (m = 2; m <= A; m++) {
        for (n = 1; n < m; n++) {
            o = (m * m) + (n * n);
            if (o > A) {
                break;
            }
            if ((m - n) % 2 == 0) {
                printf("(%d, %d, %d)\n", m, n, o);
            }
        }
    }
    return 0;
}
