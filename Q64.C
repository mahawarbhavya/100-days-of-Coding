#include <stdio.h>

int main() {
    int num, digit;
    int freq[10] = {0}; // frequency array for digits 0-9

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Count digit frequencies
    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find max frequency
    int maxFreq = 0;
    for(int i = 0; i < 10; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
        }
    }

    // Print digit(s) with max frequency
    printf("Digit(s) occurring most times: ");
    for(int i = 0; i < 10; i++) {
        if(freq[i] == maxFreq) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
