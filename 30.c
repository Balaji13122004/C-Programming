#include <stdio.h>

int main()
{
    int n = 3, i, j;
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;
    printf("Diagonal Elements are ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                printf("%d ", a[i][j]);
                sum += a[i][j];
            }
        }
    }
    printf("\nSum of diagonal elements = %d", sum);
    return 0;
}
