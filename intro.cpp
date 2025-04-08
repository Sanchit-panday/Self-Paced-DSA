// Sum of squares of whole numbers till a give number
#include <stdio.h>
int main(){
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);

	int temp = 0;
	for(int i = 1; i <= a; i++) {
		temp = temp + (i*i);
	}

	printf("The sum of Whole numbers till %d is \n\t %d\n", a, temp);
}
