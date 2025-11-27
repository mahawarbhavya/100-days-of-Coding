#include <stdio.h>

int main() {
    int n, k, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (positions to rotate): ");
    scanf("%d", &k);

    k = k % n; // handle cases where k > n

    int rotated[n];
    for(i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    printf("Array after rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}
