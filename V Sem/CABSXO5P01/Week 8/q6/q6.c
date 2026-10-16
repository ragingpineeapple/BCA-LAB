#include <stdio.h>
#include <mpi.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int main(int argc, char** argv) {
    int rank, size;
    int N = 100;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    int start = rank * N / size;
    int end = (rank + 1) * N / size - 1;

    printf("Process %d checking range [%d to %d]\n", rank, start, end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("Process %d found prime: %d\n", rank, i);
        }
    }

    MPI_Finalize();
    return 0;
}
