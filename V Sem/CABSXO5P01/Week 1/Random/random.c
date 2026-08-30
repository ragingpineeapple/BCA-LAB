#include <stdio.h>
#include <omp.h>

int main(void){

	#pragma omp parallel
	{
		#pragma omp for ordered schedule(static, 1)
		for (int i = 0; i < 5; i++){
			#pragma omp ordered
			{
				printf("Processed index: %d by thread %d\n", i, omp_get_thread_num());
			}
		}
	}
	return 0;

}
