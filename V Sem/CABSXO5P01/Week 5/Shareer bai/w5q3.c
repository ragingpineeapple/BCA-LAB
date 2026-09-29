#include <stdio.h>
#include <omp.h>
#define SIZE 100000000
int arr[SIZE];

int main(){
	
	unsigned long long i, min;
	
	double start_time, end_time, serial_time, parallel_time;
	
	for(i=0; i<SIZE; i++){
		arr[i] = rand();
	}
	min=arr[0];
	unsigned long long mini = 0;
//	printf("test serial min = %llu\n", min);
//	printf("test serial i = %llu\n", mini);
	
	start_time = omp_get_wtime();
	for(i=0; i<SIZE; i++){
		if(min>arr[i]) {min=arr[i]; mini=i;}
	}
	end_time = omp_get_wtime();
	serial_time = end_time - start_time;
	
	printf("serial min = %llu\n", min);
	printf("serial i = %llu\n", mini);
	
	min=arr[0];
	mini=0;
//	printf("test parallel min = %llu\n", min);
//	printf("test parallel i = %llu\n", mini);
	
	start_time = omp_get_wtime();
	#pragma omp parallel for
	for(i=0; i<SIZE; i++){
		if(min>arr[i]) {min=arr[i]; mini=i;}
	}
	end_time = omp_get_wtime();
	parallel_time = end_time - start_time;
	
	printf("parallel min = %llu\n", min);
	printf("parallel i = %llu\n", mini);
	
	printf("Serial execution time: %f seconds\n", serial_time);
    printf("Parallel execution time: %f seconds\n", parallel_time);
}
