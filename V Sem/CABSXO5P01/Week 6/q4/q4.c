#include <stdio.h>
#include <omp.h>

int main(void){
	int threads = 4;
	omp_set_num_threads(threads);
    int arr[threads], i;
    int threadid;

    #pragma omp parallel num_threads(threads)
	{
        #pragma omp for private(threadid) nowait
        for(i = 0; i < threads; i++){
            arr[i] = omp_get_thread_num() * 10;
            printf("Thread %d calculated value %d\n", omp_get_thread_num(), arr[i]);
        }
        
        #pragma omp barrier
        
        #pragma omp for private(threadid)
            for(i = 0; i < threads; i++){
            threadid = omp_get_thread_num();
            printf("Thread %d's value is %d, and total active threads are %d\n", i, arr[i], omp_get_thread_num());
        }          
    }
}
