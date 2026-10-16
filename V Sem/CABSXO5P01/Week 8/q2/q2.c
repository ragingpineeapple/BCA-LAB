#include <stdio.h>
#include <mpi.h>

int main(int argc, char** argv) {
    int rank, size;
    int rounds = 5;
    int ping_pong_count = 0;
	MPI_Status status;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    for (int i = 0; i < rounds; i++) {
        if (rank == 0) {
            printf("Round %d: Rank 0 sending value %d to Rank 1\n", i + 1, ping_pong_count);
            MPI_Send(&ping_pong_count, 1, MPI_INT, 1, 0, MPI_COMM_WORLD);
            
            MPI_Recv(&ping_pong_count, 1, MPI_INT, 1, 0, MPI_COMM_WORLD, &status);
            printf("Round %d: Rank 0 received value %d back from Rank 1\n\n", i + 1, ping_pong_count);
        } 
        else if (rank == 1) {
            MPI_Recv(&ping_pong_count, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, &status);
            printf("Round %d: Rank 1 received value %d from Rank 0\n", i + 1, ping_pong_count);
            
            ping_pong_count++; 
            
            printf("Round %d: Rank 1 sending incremented value %d to Rank 0\n", i + 1, ping_pong_count);
            MPI_Send(&ping_pong_count, 1, MPI_INT, 0, 0, MPI_COMM_WORLD);
        }
    }

    MPI_Finalize();
    return 0;
}
