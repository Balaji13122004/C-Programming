#include <stdio.h>

int main() {
    int P, Q, R;
    printf("Enter the values of P, Q, and R:\n");
    scanf("%d %d %d", &P, &Q, &R);
    
    for (int i = P; i <= Q; i++) {
        if (i % 10 == R || i == R) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}
