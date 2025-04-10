#include <stdio.h>
void swap(int *a, int *b);
int main(){
	//input
	int n; // creation of the array
	printf("Enter the size of array: ");
	scanf("%d", &n);
	int arr[n];
	
	printf("Enter %d values: ", n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	//Processing
	for(int i=0; i < n-1; i++){
		for(int j = 0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				swap(&arr[j], &arr[j+1]);	
			}
		}
	}


	//Output
	printf("The Sorted array is: ");
	for (int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

void swap (int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
} 
