#include <stdio.h>
#include <omp.h>

int main(void){
    int idsum=0, tid;

    #pragma omp parallel private(tid)
    {
        tid = omp_get_thread_num();
        idsum+=tid;
        printf("Thread %d adding...\n", tid);
    }

    printf("Sum of TIDs: %d", idsum);
}