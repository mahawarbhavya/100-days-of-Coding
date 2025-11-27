#include <stdio.h>

int main() {
    int n, key, i;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, found = -1;

    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == key) {
            found = mid;
            break;
        } else if(arr[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if(found != -1)
        printf("Element %d found at position %d\n", key, found+1);
    else
        printf("Element %d not found in array\n", key);

    return 0;
}
