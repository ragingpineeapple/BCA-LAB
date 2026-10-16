#include <stdio.h>
#include <mpi.h>

int main(int argc, char** argv) {
    int global_rank, global_size;
    int new_rank, color, key;
    MPI_Comm new_comm;

    MPI_Init(&argc, &argv);
    
    MPI_Comm_rank(MPI_COMM_WORLD, &global_rank);
    MPI_Comm_size(MPI_COMM_WORLD, &global_size);

    color = global_rank % 2;
    
    key = global_rank;

    MPI_Comm_split(MPI_COMM_WORLD, color, key, &new_comm);

    if (new_comm != MPI_COMM_NULL) {
        
        MPI_Comm_rank(new_comm, &new_rank);
        
        if (color == 0) {
            printf("Original Rank: %d \t| Joined EVEN group \t| New Rank: %d\n", global_rank, new_rank);
        } else {
            printf("Original Rank: %d \t| Joined ODD group \t| New Rank: %d\n", global_rank, new_rank);
        }

        MPI_Comm_free(&new_comm);
        
    } else {
        printf("Original Rank: %d \t| Excluded from sub-communicators.\n", global_rank);
    }

    MPI_Finalize();
    return 0;
}
