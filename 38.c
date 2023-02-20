#include <stdio.h>

int reverse(int num);

int main() {
    int num, reversed_num;
    printf("Enter a number: ");
    scanf("%d", &num);
    reversed_num = reverse(num);
    printf("Reverse number: %d", reversed_num);
    return 0;
}

int reverse(int num) {
    int reversed_num = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }
    return reversed_num;
}
