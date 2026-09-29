#include <stdio.h>
#include <omp.h>

int iseven(int x);

int main(void){
	int i, lim = 10000, arr[lim], evenc=0;
	double t1, t2, t3, t4;
	for(i = 0; i < lim; i++){
		arr[i] = lim - i;
	}
	
	/*for(i = 0; i < lim; i++){
		printf("%d, ", arr[i]);
	}*/
	
	t1 = omp_get_wtime();

	for(i = 0; i < lim; i++){
		if(iseven(arr[i])==1){
			evenc++;
		}
	}
	
	t2 = omp_get_wtime();
	
	printf("Even serial: %d, Time: %lf\n", evenc, t2- t1);
	
	evenc=0;
	
	t3 = omp_get_wtime();
	
	#pragma omp parallel for 
	for(i = 0; i < lim; i++){
		if(iseven(arr[i])==1){
			evenc++;
		}
	}
	
	t4 = omp_get_wtime();
	
	printf("Even parallel: %d, Time: %lf\n", evenc, t4-t3);
}

int iseven(int x){
	if(x%2==0){
		return 1;
	}
	return 0;
}
