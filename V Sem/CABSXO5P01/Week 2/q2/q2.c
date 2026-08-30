//Write an interactive program in C to merge two arrays of size N1 and N2 into an array of size N1+N2.

#include <stdio.h>

int main(void){
	int i, n1, n2, n3;
	printf("Array 1 size: ");
	scanf("%d", &n1);
	printf("Array 2 size: ");
	scanf("%d", &n2);
	n3 = n1 + n2;
	
	int arr1[n1], arr2[n2], arr3[n3];
	
	for(i = 0; i < n1; i++){
		printf("Enter %d element of array 1: ", i);
		scanf("%d", &arr1[i]);
	}
	
	for(i = 0; i < n2; i++){
		printf("Enter %d element of array 2: ", i);
		scanf("%d", &arr2[i]);
	}
	
	for(i = 0; i < n1; i++){
		arr3[i] = arr1[i];
	}
	for(i = 0; i < n2; i++){
		arr3[n1+i] = arr2[i];
	}
	for(i = 0; i < n3; i++){
		printf("%d, ", arr3[i]);
	}
	
}

