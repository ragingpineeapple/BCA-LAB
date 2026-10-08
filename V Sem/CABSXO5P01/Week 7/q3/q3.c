#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define N 10000000
double A[N], B[N];

int main() {
    int i;


    for (i = 0; i < N; i++) {
        A[i] = (double)(i + 1);
        B[i] = 1.0;
    }

    double stt, et;

    double sdot = 0.0;
    stt = omp_get_wtime();

    for (i = 0; i < N; i++) {
        sdot += A[i] * B[i];
    }

    et = omp_get_wtime();
    double st = et - stt;

    double pdot = 0.0;
    stt = omp_get_wtime();

    #pragma omp parallel for reduction(+:pdot)
    for (i = 0; i < N; i++) {
        pdot += A[i] * B[i];
    }

    et = omp_get_wtime();
    double pt = et - stt;

    printf("Serial Dot Product:%f\n", sdot);
    printf("Serial Time:%f seconds\n\n", st);

    printf("Parallel Dot Product (Reduction):%f\n", pdot);
    printf("Parallel Time (Reduction):%f seconds\n", pt);
}