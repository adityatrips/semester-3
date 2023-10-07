#include <stdio.h>

void deleteElement(int arr[], int n, int x) {
    int i, j;

    for (i = 0; i < n; i++)
        if (arr[i] == x)
            break;

    if (i == n)
        return;

    for (j = i; j < n - 1; j++)
        arr[j] = arr[j + 1];

    n--;

    printf("Array after deleting %d: ", x);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;

    deleteElement(arr, n, x);

    return 0;
}
