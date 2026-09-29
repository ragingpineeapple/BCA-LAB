#include <stdio.h>
#include <omp.h>

int main(void){
	int i, lim = 100000, arr[lim];
	double t1, t2, t3, t4;
	
	t1 = omp_get_wtime();
	for(i = 0; i < lim; i++){
		arr[i] = i*2;
		//printf("%d\n", i);
		if(i = 0){
			printf("arr[%d] = %d\n", i, arr[i]);
		}
		else if(i = 100000){
			printf("arr[%d] = %d\n", i , arr[i]);
		}
		else if(i = 999999){
			printf("arr[%d] = %d\n", i, arr[i]);
		}
	}
	
	t2 = omp_get_wtime();
	
	t3 = omp_get_wtime();
	#pragma omp parallel for
	for(i = 0; i < lim; i++){
		arr[i] = i*2;
		//printf("%d\n", i);
		if(i = 0){
			printf("arr[%d] = %d\n", i, arr[i]);
		}
		else if(i = 100000){
			printf("arr[%d] = %d\n", i , arr[i]);
		}
		else if(i = 999999){
			printf("arr[%d] = %d\n", i, arr[i]);
		}
	}
	
	t4 = omp_get_wtime();
	printf("Time: %lf\n", t2-t1);
	printf("Time: %lf\n", t4-t3);
}
