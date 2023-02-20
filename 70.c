#include <stdio.h>

// Define a structure for a complex number
typedef struct {
    double real;
    double imag;
} complex;

// Function to add two complex numbers
complex add_complex(complex num1, complex num2) {
    complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

int main() {
    // Declare and initialize two complex numbers
    complex num1 = {3.5, 2.5};
    complex num2 = {2.5, 1.5};

    // Add the two complex numbers
    complex sum = add_complex(num1, num2);

    // Print the result
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}
