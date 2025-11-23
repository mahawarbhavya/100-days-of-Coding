#include <stdio.h>

int main() {
    int count, i;
       for (count = 1; count <= 5; count += 2) {
        for (i = 0; i < count; i++) {
            printf("*\n");
        }
        if (count != 5) printf("\n"); 
    }


    for (count = 3; count >= 1; count -= 2) {
        for (i = 0; i < count; i++) {
            printf("*\n");
        }
        if (count != 1) printf("\n"); 
    }

    return 0;
}
