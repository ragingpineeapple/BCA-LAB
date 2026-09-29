#include <stdio.h>
#include <omp.h>

int main(void){
    int i, count = 0;

    #pragma omp parallel for firstprivate(count)
	for(i = 0; i < 100; i++){
        count++;
        printf("Thread %d, count= %d\n", omp_get_thread_num(), count);
    }

    //printf("Count: %d", count);
}
