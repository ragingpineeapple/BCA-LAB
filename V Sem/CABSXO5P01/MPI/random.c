#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
    // 1. Declare the missing variables as integers
    int numberOfProcs, data=69;
    MPI_Status status;
    int rank;

    // 2. Initialize the environment
    MPI_Init(&argc, &argv);

    // 3. Get the total number of processes
    MPI_Comm_size(MPI_COMM_WORLD, &numberOfProcs);

    // 4. Get the rank (FIXED capitalization here: Comm, not COMM)
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    // ... the rest of your code ...

    

    if(rank == 0){
        MPI_Recv(&data, 1, MPI_INT, 1, 0, MPI_COMM_WORLD, &status);
    }
    else if(rank == 1){
        data = 67;
        MPI_Send(&data, 1, MPI_INT, 0, 0, MPI_COMM_WORLD);
        data = 69;
    }

    printf("Rank: %d, Data: %d", rank, data);
    
    MPI_Finalize();
    return 0;
}

