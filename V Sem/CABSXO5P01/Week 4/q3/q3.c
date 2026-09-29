#include <stdio.h>
#include <omp.h>

int main(void){
    int ix, tid;
    printf("Enter number of threads: ");
    scanf("%d", &ix);
    omp_set_num_threads(ix);

    #pragma omp parallel private(tid)
    {
        tid = omp_get_thread_num();
        printf("Hello from thread %d\n", tid);
    }

}