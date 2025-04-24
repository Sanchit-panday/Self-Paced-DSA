#include <iostream>
void Merge_sort(int *arr, int left, int right);
void merge(int *arr, int left, int mid, int right);
int main(){
    //input
    int size_arr = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size_arr);
    
    int arr[size_arr];
    if(size_arr==1){
        //already sorted
    }
    for(int i=0; i<size_arr; i++){
        scanf("%d", &arr[i]);
    }

    //processing
    Merge_sort(arr, 0, size_arr-1);

    //output
    for(int i=0; i<size_arr; i++){
        printf("%d, ", arr[i]);
    }
    return 0;
}
void Merge_sort(int *arr, int left, int right){
    if(left>= right){
        return;
    }
    int mid = left + (right-left)/2;
    Merge_sort(arr, left, mid);
    Merge_sort(arr, mid+1, right);
    merge(arr, left, mid, right);
}
void merge(int *arr, int left, int mid, int right){
    int n1= mid-left+1;
    int n2 = right-mid;

    int left_arr[n1], right_arr[n2];

    for(int i = 0; i< n1; i++){
        left_arr[i]= arr[left + i];
    }
    for(int j = 0; j< n2; j++){
        right_arr[j]= arr[mid + 1 + j];
    }
    int i = 0, j = 0;
    int k = left;

    while(i<n1 && j<n2){
        if(left_arr[i] <= right_arr[j]) {
            arr[k] = left_arr[i];
            i++;
        } else {
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k] = left_arr[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = right_arr[j];
        j++;
        k++;
    }
}