#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // reads input until space

    // Traverse until null terminator
    for(int i=0; str[i] != '\0'; i++) {
        count++;
    }

    printf("Number of characters = %d\n", count);

    return 0;
}
