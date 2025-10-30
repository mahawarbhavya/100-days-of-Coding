#include <stdio.h>

int main() {
    float a, b;  // Using float to handle division properly
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Sum = %.2f\n", a + b);
    printf("Difference = %.2f\n", a - b);
    printf("Product = %.2f\n", a * b);

    if (b != 0) {
        printf("Quotient = %.2f\n", a / b);
    } else {
        printf("Division not possible (denominator is zero)\n");
    }

    return 0;
