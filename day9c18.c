#include <stdio.h>

int main() {
    int percentage;

    printf("Enter your percentage (0-100): ");
    scanf("%d", &percentage);
    if (percentage >= 90 && percentage <= 100) {
        printf("Grade A\n");
    } else if (percentage >= 80 && percentage <= 89) {
        printf("Grade B\n");
    } else if (percentage >= 70 && percentage <= 79) {
        printf("Grade C\n");
    } else if (percentage >= 60 && percentage <= 69) {
        printf("Grade D\n");
    } else if (percentage >= 0 && percentage < 60) {
        printf("Grade G\n");
    } else {
        printf(" Entered wrong input! Please enter percentage from 0 to 100");
    }

    return 0;
}
