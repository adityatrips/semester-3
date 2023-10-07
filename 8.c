#include <stdio.h>

int main() {
    int arr[100], n, k, newElement;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the new element: ");
    scanf("%d", &k);

    printf("Enter the new element: ");
    scanf("%d", &newElement);

    for (int i = n; i >= k; i--) {
        arr[i] = arr[i - 1];
    }

    arr[k - 1] = newElement;

    n++;

    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
