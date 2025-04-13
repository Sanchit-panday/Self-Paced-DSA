#include <stdio.h>

void selection_sort(int *arr, int size);
void swap(int *x, int *y);

int main() {
    // Input
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Processing
    selection_sort(arr, n);

    // Output
    printf("\nAfter Sorting: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selection_sort(int *arr, int size){
    int imin = 0;
    for(int i = 0; i < size - 1; i++){
        imin = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[imin]){
                imin = j;
            }
        }
        swap(&arr[i], &arr[imin]);
    }
}
