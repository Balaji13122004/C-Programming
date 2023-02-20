#include <stdio.h>

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, count = 0, number = 2, nth_prime = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("%d prime numbers are: ", n);
    while (count < n) {
        if (is_prime(number)) {
            count++;
            printf("%d ", number);
            if (count == n) {
                nth_prime = number;
            }
        }
        number++;
    }
    printf("\n%d", n);
    if (n % 10 == 1 && n % 100 != 11) {
        printf("st");
    } else if (n % 10 == 2 && n % 100 != 12) {
        printf("nd");
    } else if (n % 10 == 3 && n % 100 != 13) {
        printf("rd");
    } else {
        printf("th");
    }
    printf(" Prime number is %d\n", nth_prime);

    printf("%d prime numbers after %d are: ", n - 1, nth_prime);
    count = 0;
    number = nth_prime + 1;
    while (count < n - 1) {
        if (is_prime(number)) {
            count++;
            printf("%d ", number);
        }
        number++;
    }
    printf("\n");
    return 0;
}
