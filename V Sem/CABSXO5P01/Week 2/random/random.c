#include <stdio.h>
#include <omp.h>

int main(void){
	int x, a=0, b=1, temp, i;
	printf("Enter fibo number: ");
	scanf("%d", &x);
	
	int arr[x];
	arr[0] = 0;
	arr[1] = 1;
	
	#pragma omp parallel for
	for (i = 2; i < x; i++){
		arr[i] = arr[i-1] + arr[i-2];
	}
	
	for(i = 0; i < x; i++){
		printf("%d ", arr[i]);
	}
}
