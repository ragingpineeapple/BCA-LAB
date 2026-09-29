#include <stdio.h>
#include <omp.h>

double a[5000000], b[5000000], c[5000000];

int main(){
	
	unsigned long long i;
	double start_time, end_time, serial_time, parallel_time;
	
	for(i=0; i<5000000; i++){
		a[i] = i;
		b[i] = i*0.5;
	}
	
	start_time = omp_get_wtime();
	for(i=0; i<5000000; i++){
		c[i] = a[i]+b[i];
	}
	end_time = omp_get_wtime();
	serial_time = end_time - start_time;
	
	start_time = omp_get_wtime();
	#pragma omp parallel for
	for(i=0; i<5000000; i++){
		c[i] = a[i]+b[i];
	}
	end_time = omp_get_wtime();
	parallel_time = end_time - start_time;
	
	printf("Serial execution time: %f seconds\n", serial_time);
    printf("Parallel execution time: %f seconds\n", parallel_time);
}
