#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int numerator = 2 * i; 
        int denominator = 4 * i - 1;   
        sum += (double)numerator / denominator;
    }

    printf("Sum of series up to %d terms = %.4f\n", n, sum);

    return 0;
}
