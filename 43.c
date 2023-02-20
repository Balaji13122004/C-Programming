#include <stdio.h>

int factorial(int num) {
    if(num == 1 || num == 0) return 1;
    else return num * factorial(num-1);
}

int main() {
    int num, temp, rem, sum = 0;
    printf("Enter the number to check for strong number: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0) {
        rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }
    if(sum == num) printf("%d is the armstrong number", num);
    else printf("%d is not an armstrong number", num);
    return 0;
}
