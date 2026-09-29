#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define SIZE 1000000

int arr[SIZE];

int main() {
    int s_max, p_max;
    double start_time, end_time, stime, ptime;
    int i;
    omp_lock_t lock;

    for (i = 0; i < SIZE; i++) {
        arr[i] = rand() % 10000000;
    }

    start_time = omp_get_wtime();
    s_max = arr[0];
    for (i = 1; i < SIZE; i++) {
        if (arr[i] > s_max) {
            s_max = arr[i];
        }
    }
    end_time = omp_get_wtime();
    stime = end_time - start_time;

    printf("Serial Max: %d\n", s_max);
    printf("Serial Time: %f seconds\n", stime);

    p_max = arr[0];
    omp_init_lock(&lock); 

    start_time = omp_get_wtime();
    #pragma omp parallel for
    for (i = 0; i < SIZE; i++) {
        omp_set_lock(&lock); 
        if (arr[i] > p_max) {
            p_max = arr[i];
        }
        omp_unset_lock(&lock);
    }
    end_time = omp_get_wtime();
    ptime = end_time - start_time;

    omp_destroy_lock(&lock);
    printf("Parallel Lock Max: %d\n", p_max);
    printf("Parallel Lock Time: %f seconds\n", ptime);

    return 0;
}
