#include <stdio.h>
#include <omp.h>

int main(void){
    int tid, td;

    #pragma omp parallel private(tid) shared(td)
    {
        tid = omp_get_thread_num();
        td = omp_get_num_threads();
        printf("I am thread %d of %d active threads\n", tid, td);
    }

}