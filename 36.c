#include <stdio.h>

#define ROW 2
#define COL 2

int main()
{
    int mat1[ROW][COL], mat2[ROW][COL], matMul[ROW][COL];
    int i, j, k;

    printf("Enter values for matrix 1:\n");
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter values for matrix 2:\n");
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // multiply matrices
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            matMul[i][j] = 0;
            for (k = 0; k < COL; k++) {
                matMul[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Matrix multiplication result:\n");
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d ", matMul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
