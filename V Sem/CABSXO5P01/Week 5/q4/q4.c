#include <stdio.h>
	
	
int a[1000], b[1000];

int main(void){
	
	int i, l = 1000, dot=0;
	double t1, t2, t3, t4;
	
	for(i = 0; i < l; i++){
		a[i] = i;
		b[i] = i;
	}
	
	t1 = omp_get_wtime();
	
	for(i = 0; i < l; i++){
		dot += (a[i] * b[i]);
	}
	
	t2 = omp_get_wtime();
	
	printf("Serial approach: %d\n", dot);
	
	t3 = omp_get_wtime();
	
	#pragma omp parallel for
	for(i = 0; i < l; i++){
		dot += (a[i] * b[i]);
	}
	
	t4 = omp_get_wtime();
	
	printf("Parallel approach: %d\n", dot);
	
	printf("Time serial: %lf, Time paralel: %lf\n", t2-t1, t4-t3);

}
