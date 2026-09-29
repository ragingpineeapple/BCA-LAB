#include <stdio.h>
#include <omp.h>

int main(void){
    int x;
    printf("Enter the number of threads: ");
    scanf("%d", &x);

    omp_set_num_threads(x);

    #pragma omp parallel
    {
        printf("Hello World\n");
    }
}