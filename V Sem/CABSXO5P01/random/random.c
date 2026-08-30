#include <stdio.h>
#include <omp.h>

int main(void){
	#pragma omp parallel for
	for (int i = 0; i < 5; i++){
		printf("Thread: %d, Jumanji:%d\n", omp_get_thread_num(), i );
	}
}
