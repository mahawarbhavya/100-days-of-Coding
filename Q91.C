#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200], result[200];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // reads spaces too

    for(int i=0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // handle uppercase
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
            // skip vowels
            continue;
        }
        result[j++] = str[i]; // copy non-vowel
    }
    result[j] = '\0'; // terminate new string

    printf("String without vowels: %s\n", result);

    return 0;
}
