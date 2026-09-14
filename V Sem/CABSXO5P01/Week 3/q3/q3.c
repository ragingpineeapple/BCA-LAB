#include <stdio.h>
#include <omp.h>

int main(void){
    int i;
    #pragma omp parallel for
    for(i = 0; i <= 20; i++){
        printf("Hello World\n");
    }
}