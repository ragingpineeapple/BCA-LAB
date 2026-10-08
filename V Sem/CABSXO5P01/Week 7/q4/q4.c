#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

#define N 1000000
int arr[N];

int main(void) {

    double sum = 0.0, stt, et, avg;

    int i;
    /*srand((unsigned int)time(NULL));
    for (i = 0; i < N; i++) {
        arr[i] = ((float)rand() / (float)RAND_MAX) * 1000000.0f;
    }*/

    for(i = 0; i < N; i++){
        arr[i] = i;
    }

    sum = 0.0;

    stt = omp_get_wtime();

    #pragma omp parallel for reduction(+:sum)
    for (i = 0; i < N; i++) {
        sum += arr[i];
    }

    et = omp_get_wtime();

    avg = sum / N;

    printf("avg of array elements:%f\n", avg);
    printf("Time taken (Parallel):%f seconds\n", et - stt);
}