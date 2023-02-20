#include <stdio.h>

int main() {
    int num_lines;
    printf("Enter number of lines: ");
    scanf("%d", &num_lines);

    for (int i = 1; i <= num_lines; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
