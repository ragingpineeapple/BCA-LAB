#include <stdio.h>
#include <mpi.h>

int main(int argc, char** argv) {
    int rank, size;
    int send_val, recv_val;
    
    MPI_Request send_req, recv_req;
    MPI_Status status;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    if (rank == 0) {
        send_val = 100;
        printf("Rank 0: Initiating non-blocking send and receive...\n");
        
        MPI_Isend(&send_val, 1, MPI_INT, 1, 0, MPI_COMM_WORLD, &send_req);
        MPI_Irecv(&recv_val, 1, MPI_INT, 1, 1, MPI_COMM_WORLD, &recv_req);

        printf("Rank 0: Doing background work while the network handles the transfer...\n");

        MPI_Wait(&send_req, &status);
        MPI_Wait(&recv_req, &status);
        
        printf("Rank 0: Communication completed! Received value %d\n", recv_val);
    } 
    else if (rank == 1) {
        send_val = 200;
        printf("Rank 1: Initiating non-blocking send and receive...\n");
        
        MPI_Irecv(&recv_val, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, &recv_req);
        MPI_Isend(&send_val, 1, MPI_INT, 0, 1, MPI_COMM_WORLD, &send_req);

        printf("Rank 1: Doing background work while the network handles the transfer...\n");

        MPI_Wait(&recv_req, &status);
        MPI_Wait(&send_req, &status);
        
        printf("Rank 1: Communication completed! Received value %d\n", recv_val);
    }

    MPI_Finalize();
    return 0;
}
