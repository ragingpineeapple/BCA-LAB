#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include <omp.h>

#define N 1000000
int arr[N];

int main() {

    /*srand((unsigned int)time(NULL));
    for (int i = 0; i < N; i++) {
        arr[i] = (rand() % 2000000) - 1000000;
    }*/

    for(int i = 0; i < N; i++){
        arr[i] = i;
    }

    int max_val = INT_MIN;
    int min_val = INT_MAX;

    double start_time = omp_get_wtime();

    #pragma omp parallel for reduction(max: max_val) reduction(min: min_val)
    for (int i = 0; i < N; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    double end_time = omp_get_wtime();

    printf("Min Value: %d\n", min_val);
    printf("Max Value: %d\n", max_val);
    printf("Execution Time: %f seconds\n\n", end_time - start_time);

}