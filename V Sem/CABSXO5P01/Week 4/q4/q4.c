#include <stdio.h>
#include <omp.h>

int main(void){
    int i, sum;

    double tbegin, tstop, t1, t2;

    tbegin = omp_get_wtime();

    for(i = 0; i < 10000;i++){
        sum+=i;
    }
    
    tstop = omp_get_wtime();

    t1 = tstop-tbegin;

    printf("Sum1: %d\n", sum);
    sum = 0;

    tbegin = omp_get_wtime();
    
    /*#pragma omp parallel for reduction(+:sum)
    for(i = 0; i < 10000;i++){
        sum+=i;
    }*/

    #pragma omp parallel for
    for(i = 0; i < 10000;i++){
        sum+=i;
    }
    
    tstop = omp_get_wtime();

    t2 = tstop-tbegin;

    printf("Sum1: %d\n", sum);

    printf("Time taken by serial approach: %lf\nTime taken by parallel approach: %lf\n", t1, t2);

    
}