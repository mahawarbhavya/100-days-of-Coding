#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter elements of matrix:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Diagonal traversal
    for(int k=0; k<=2*(n-1); k++) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(i + j == k) {
                    printf("%d ", a[i][j]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
