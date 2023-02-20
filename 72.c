#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} complex;

complex divide(complex num1, complex num2);

int main() {
    complex num1, num2, result;
    printf("Enter the first complex number (a + bi): ");
    scanf("%lf %lf", &num1.real, &num1.imaginary);
    printf("Enter the second complex number (c + di): ");
    scanf("%lf %lf", &num2.real, &num2.imaginary);

    result = divide(num1, num2);

    printf("Result: %.2f + %.2fi\n", result.real, result.imaginary);
    return 0;
}

complex divide(complex num1, complex num2) {
    complex result;
    double denominator;

    denominator = num2.real * num2.real + num2.imaginary * num2.imaginary;

    result.real = (num1.real * num2.real + num1.imaginary * num2.imaginary) / denominator;
    result.imaginary = (num2.real * num1.imaginary - num1.real * num2.imaginary) / denominator;

    return result;
}
