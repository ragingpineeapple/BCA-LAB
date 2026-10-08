#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define N 100000000
int arr[N];

int main() {

    #pragma omp parallel for
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }

    double start_time, end_time;

    long long ss = 0;
    start_time = omp_get_wtime();

    for (int i = 0; i < N; i++) {
        ss += arr[i];
    }

    end_time = omp_get_wtime();
    double st = end_time - start_time;

    long long cs = 0;
    start_time = omp_get_wtime();

    #pragma omp parallel for
    for (int i = 0; i < N; i++) {
        #pragma omp critical
        {
            cs += arr[i];
        }
    }

    end_time = omp_get_wtime();
    double ct = end_time - start_time;

    long long as = 0;
    start_time = omp_get_wtime();

    #pragma omp parallel for
    for (int i = 0; i < N; i++) {
        #pragma omp atomic
        as += arr[i];
    }

    end_time = omp_get_wtime();
    double at = end_time - start_time;

    long long rs = 0;
    start_time = omp_get_wtime();

    #pragma omp parallel for reduction(+:rs)
    for (int i = 0; i < N; i++) {
        rs += arr[i];
    }

    end_time = omp_get_wtime();
    double rt = end_time - start_time;

    printf("Serial Sum: %lld\n", ss);
    printf("Serial Time: %f seconds\n\n", st);

    printf("Parallel Sum (Critical): %lld\n", cs);
    printf("Parallel Time (Critical): %f seconds\n\n", ct);

    printf("Parallel Sum (Atomic): %lld\n", as);
    printf("Parallel Time (Atomic): %f seconds\n\n", at);

    printf("Parallel Sum (Reduction): %lld\n", rs);
    printf("Parallel Time (Reduction): %f seconds\n", rt);

    return 0;
}