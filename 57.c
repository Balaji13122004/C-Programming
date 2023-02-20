#include <stdio.h>

int main() {
    int num, square, cube;

    // prompt user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // calculate square and cube using standard arithmetic operations
    square = num * num;
    cube = num * num * num;

    // display the results
    printf("Square of %d is %d\n", num, square);
    printf("Cube of %d is %d\n", num, cube);

    return 0;
}
