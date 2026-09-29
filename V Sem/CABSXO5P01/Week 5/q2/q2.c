#include <stdio.h>
#include <omp.h>

int main(void){
	int i, s = 50000, a[s], b[s], c[s];
	
	double t1, t2, t3, t4;
	
	for(i = 0; i < s; i++){
		a[i] = i;
	}
	
	for(i = 0; i < s; i++){
		b[i] = i*2;
	}
	
	/*for(i = 0; i < s; i++){
		printf("%d, ", a[i]);
	}
	
	for(i = 0; i < s; i++){
		printf("%d, ", b[i]);
	}*/
	
	t1 = omp_get_wtime();
	for(i = 0; i < s; i++){
		c[i] = a[i] + b[i];
	}
	t2 = omp_get_wtime();
	
	for(i = 0; i < s; i++){
		printf("%d+%d = %d\n", a[i], b[i], c[i]);
	}
	
	t3 = omp_get_wtime();
	
	#pragma omp parallel for
	for(i = 0; i < s; i++){
		c[i] = a[i] + b[i];
	}

	t4 = omp_get_wtime();
	
	for(i = 0; i < s; i++){
		printf("%d+%d = %d\n", a[i], b[i], c[i]);
	}
	
	printf("Serial approach: %lf\nParallel approach: %lf\n", t2-t1, t4-t3);
}
