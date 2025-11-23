#include <stdio.h>

int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int gcd = hcf(a, b);
    int lcm = (a * b) / gcd;

    printf("LCM = %d\n", lcm);

    return 0;
}
