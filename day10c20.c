#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);  

    switch (n) {
        case 1:
            printf("The day is SUNDAY\n");
            break;
        case 2:
            printf("The day is MONDAY\n");
            break;
        case 3:
            printf("The day is TUESDAY\n");  
            break;
        case 4:
            printf("The day is WEDNESDAY\n");
            break;
        case 5:
            printf("The day is THURSDAY\n");
            break;
        case 6:
            printf("The day is FRIDAY\n");
            break;
        case 7:  
            printf("The day is SATURDAY\n");
            break;
        default:
            printf("INVALID NUMBER ENTERED\n");
            break;
    }

    return 0;
}
