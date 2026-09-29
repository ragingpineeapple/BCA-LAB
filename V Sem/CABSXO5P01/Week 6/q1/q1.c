
#include <stdio.h>
#include <omp.h>

int main(void){
    int x, i;
	//21456
    printf("Enter number of elements in array: ");
    scanf("%d", &x);

    int arr[x];

    for(i = 0; i < x; i++){
        /*printf("Enter element number %d: ", i);
        scanf("%d", &arr[i]);*/
        
        arr[i] = i;
    }

    int serial_sum=0, parallel_sum=0;

    for(i = 0; i < x; i++){
        serial_sum += arr[i];
    }

    #pragma omp parallel for
    for(i = 0; i < x; i++){
        #pragma omp critical
            parallel_sum += arr[i];
	}
    printf("Serial sum: %d, Parallel sum: %d\n", serial_sum, parallel_sum);

}
