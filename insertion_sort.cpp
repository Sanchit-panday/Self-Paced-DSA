#include <stdio.h>

void insertion_sort(int arr[], int n);

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertion_sort(arr, n);

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void insertion_sort(int arr[], int n) {
    for(int j = 1; j < n; j++) {
        int key = arr[j];
        int i = j - 1;
        while(i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }
}

