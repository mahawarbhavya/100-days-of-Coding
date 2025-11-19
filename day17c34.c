#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is neither prime nor composite.\n", num);
        return 0;
    }

    for (int i = 1; i <= num; i++) {
        if (num % i == 0)
            count++;
    }

    if (count > 2)
        printf("%d is a composite number.\n", num);
    else
        printf("%d is a prime number.\n", num);

    return 0;
}
