#include <stdio.h>

int main() {
    int n, i, key, pos;

    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[n+1]; // +1 for new element
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Find position
    pos = n;
    for(i = 0; i < n; i++) {
        if(arr[i] > key) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert element
    arr[pos] = key;

    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
