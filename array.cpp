#include <stdio.h>
int main(){

	//input
	int n;
	printf("enter the size of array: ");
	scanf("%d", &n);
	if (n<= 0 ) {
		return 0;
	}
	int arr[n];
	printf("enter the elements: ");
	for (int i= 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	//processing
	int sum = 0;
	for(int i = 0; i<n; i++){
		sum = sum + arr[i];
	}

	// output
	printf("the sum of given %d numbers is: %d\n", n, sum);

	return 0;
}
