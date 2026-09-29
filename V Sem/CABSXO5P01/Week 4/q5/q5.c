#include <stdio.h>
#include <omp.h>

int main(void){
    int tid;
    omp_set_num_threads(3);

    #pragma omp parallel private(tid)
    {
        tid = omp_get_thread_num();
        printf("Hello from thread %d\n", tid);
    }

}