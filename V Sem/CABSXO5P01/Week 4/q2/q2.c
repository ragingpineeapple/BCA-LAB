#include <stdio.h>
#include <omp.h>

int main(void){
    int tid, proc;

    #pragma omp parallel private(tid) shared(proc)
    {
        tid = omp_get_thread_num();
        proc = omp_get_num_procs();
        printf("Thread %d is running on a system with %d processors.\n", tid, proc);
    }

}