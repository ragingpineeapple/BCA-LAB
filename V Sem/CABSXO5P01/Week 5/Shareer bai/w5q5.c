#include <stdio.h>
#include <omp.h>
#define SIZE 100000000
int arr[SIZE];

int main(){
	
	unsigned long long i, count;
	
	double start_time, end_time, serial_time, parallel_time;
	
	for(i=0; i<SIZE; i++){
		arr[i] = rand();
	}
	
	start_time = omp_get_wtime();
	for(i=0; i<SIZE; i++){
		if(arr[i]%2==0) {count++;}
	}
	end_time = omp_get_wtime();
	serial_time = end_time - start_time;
	
	printf("serial count = %llu\n", count);
	
	start_time = omp_get_wtime();
	#pragma omp parallel for private(count)
	for(i=0; i<SIZE; i++){
		if(arr[i]%2==0) {count++;}
	}
	end_time = omp_get_wtime();
	parallel_time = end_time - start_time;
	
	printf("parallel count = %llu\n", count);
	
	printf("Serial execution time: %f seconds\n", serial_time);
    printf("Parallel execution time: %f seconds\n", parallel_time);
}
