#include <stdio.h>
#include <omp.h>

int main(void){
	int i, lim = 10000, arr[lim], min;
	
	for(i = 0; i < lim; i++){
		arr[i] = lim - i;
	}
	
	for(i = 0; i < lim; i++){
		printf("%d, ", arr[i]);
	}
	
	min = 0;
	
	#pragma omp parallel for
	for(i = 0; i < lim; i++){
		if(arr[min] > arr[i]){
			min = i;
		}
	}
	
	printf("Minimum: %d", arr[min]);
	
	
	
		
}
