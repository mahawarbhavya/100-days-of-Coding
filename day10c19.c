#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the value of side 1\n"); 
    scanf("%d", &side1);

    printf("Enter the value of side 2\n");
    scanf("%d", &side2);

    printf("Enter the value of side 3\n");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("The triangle is equilateral\n");
    } else if (side1 == side2 || side2 == side3 || side3 == side1) {
        printf("The triangle is isosceles\n");
    } else {
        printf("The triangle is scalene\n");
    }

    return 0;
}
