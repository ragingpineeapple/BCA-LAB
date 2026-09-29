#include <stdio.h>
#include <omp.h>

double a[5000000], b[5000000];

int main(){
	
	long long i;
	double start_time, end_time, serial_time, parallel_time;
	double dot = 0;
	
	for(i=0; i<5000000; i++){
		a[i] = i+1;
		b[i] = i*0.5+1;
	}
	
	start_time = omp_get_wtime();
	for(i=0; i<5000000; i++){
		dot += a[i]*b[i];
	}
	end_time = omp_get_wtime();
	serial_time = end_time - start_time;
	printf("Serial dot: %f\n", dot);	
	printf("Serial execution time: %f seconds\n", serial_time);
	
	dot=0;
	start_time = omp_get_wtime();
	#pragma omp parallel for
	for(i=0; i<5000000; i++){
		dot += a[i]*b[i];
	}
	end_time = omp_get_wtime();
	parallel_time = end_time - start_time;
	

    printf("Parallel dot: %f\n", dot);	
    printf("Parallel execution time: %f seconds\n", parallel_time);
}
