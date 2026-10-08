#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define N 1000 // Matrix size NxN
int A[N][N], B[N][N];

int main(void) {

    int i, j;
    double stt, et;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            A[i][j] = i + j;
        }
    }

    stt = omp_get_wtime();

    #pragma omp parallel for
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            B[i][j] = A[j][i];
        }
    }

    et = omp_get_wtime();


    printf("Sample Input (partial matrix A):\n");
    printf("A = [[%d, %d],\n", A[0][0], A[0][1]);
    printf("[%d, %d]]\n\n", A[1][0], A[1][1]);

    printf("Sample Output (partial matrix B):\n");
    printf("B = [[%d, %d],\n", B[0][0], B[0][1]);
    printf("[%d, %d]]\n\n", B[1][0], B[1][1]);

    printf("Execution Time(Parallel):%fs\n", et - stt);
}