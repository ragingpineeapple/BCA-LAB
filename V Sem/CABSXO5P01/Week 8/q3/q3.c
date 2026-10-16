#include <stdio.h>
#include <mpi.h>

int main(int argc, char** argv){
	int rank, size;
	MPI_Status status;
	
	MPI_Init(&argc, &argv);

	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	int i, ts, tr;
	
			

	
	if(rank == 0){
		for(i = 0; i < size-1; i++){
			ts = i+10;
			MPI_Send(&ts, 1, MPI_INT, i+1, 1, MPI_COMM_WORLD);
			printf("Sending task %d to worker %d\n",ts, i+1);
			MPI_Recv(&tr, 1, MPI_INT, i+1, 1, MPI_COMM_WORLD, &status); 
			printf("Acknowledging task %d\n", tr);
		}
	
	}
	else{
		MPI_Recv(&tr, 1, MPI_INT, 0, 1,  MPI_COMM_WORLD, &status);
		printf("Worker %d recieved task %d\n",rank, tr);
		MPI_Send(&tr, 1, MPI_INT, 0, 1, MPI_COMM_WORLD);
	}
	
	
	MPI_Finalize();
}


