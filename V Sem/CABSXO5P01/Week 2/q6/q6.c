#include <stdio.h>
#include <omp.h>

int main(void){
	int i, arr[5], x;
	
	for(i = 0; i < 5; i++){
		printf("Enter element %d: ", i);
		scanf("%d", &arr[i]);
	}
	#pragma omp parallel for
	for(i = 0; i < 5; i++){
		x = arr[i];
		if(arr[i]%2 == 0){
			printf("%d is even!\n", arr[i]);
		}
		else{
			printf("%d is odd!\n", arr[i]);
		}
	}
}