#include <stdio.h>
int main() {
    int a, b;
    printf("Enter value of a and b: ");
    scanf("%d %d", &a, &b); // Corrected scanf format
    printf("Sum = %d", a + b);
    return 0; // Fixed return statement
}
