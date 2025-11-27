#include <stdio.h>

int main() {
    int n, i, pos, key;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n+1]; // +1 for new element
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Shift elements to the right
    for(i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert element
    arr[pos-1] = key;

    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
