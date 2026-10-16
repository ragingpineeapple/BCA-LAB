#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

int main(int argc, char** argv){
    int rank, size;
	MPI_Status status;

	MPI_Init(&argc, &argv);

	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	int rec;
	int source = (rank+size-1)%size;
	if(rank%2 == 0){
		MPI_Send(&rank, 1, MPI_INT, (rank+1)%size, 0, MPI_COMM_WORLD);
		MPI_Recv(&rec, 1, MPI_INT, source, 0, MPI_COMM_WORLD, &status);
	}
	else{
		MPI_Recv(&rec, 1, MPI_INT, source, 0, MPI_COMM_WORLD, &status);
		MPI_Send(&rank, 1, MPI_INT, (rank+1)%size, 0, MPI_COMM_WORLD);
		
	}

	printf("%d received %d from %d\n ", rank, rec, source);

	MPI_Finalize();
}
