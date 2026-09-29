#include <stdio.h>
#include <omp.h>

#define SIZE 20
int arr[SIZE];

int main(){
    omp_set_num_threads(4);
    
    #pragma omp parallel 
	{
        int tid = omp_get_thread_num();
        int num_threads = omp_get_num_threads();
        
        int chunk_size = SIZE / num_threads;
        int start = tid * chunk_size;
        int end = start + chunk_size;
        int i;
        for(i = start; i < end; i++){
            arr[i] = tid;
        }
    } 
    int i;
    for(i = 0; i < SIZE; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
