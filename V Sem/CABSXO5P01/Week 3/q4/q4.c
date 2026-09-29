#include <stdio.h>
#include <omp.h>

int main(void){
    int i;

    #pragma omp parallel for
    for(i = 0; i < 101; i++){
        printf("Hello World\n");
    }
}