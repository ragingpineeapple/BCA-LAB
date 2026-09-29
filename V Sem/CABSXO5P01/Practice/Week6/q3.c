#include <stdio.h>
#include <omp.h>
#define SIZE 100000

int arr[SIZE];

int main(void){
    for(int i = 0; i < SIZE; i++){
        arr[i] = (i+1)*0.5;
    }

    double t1, t2, t3, t4;

    t1 = omp_get_wtime();
    
    omp_lock_t lol;
    int max=arr[0];

    omp_init_lock(&lol);
        
    #pragma omp parallel for
    for(int i = 0 ; i<SIZE ; i++){
        omp_set_lock(&lol);
        if(arr[i] > max){
            max = arr[i];
        }
        omp_unset_lock(&lol);
    }

    omp_unset_lock(&lol);

    t2 = omp_get_wtime();

    printf("MAX: %d\n", max);
    printf("TIM: %lf\n", t2-t1);

    t3 = omp_get_wtime();
    max = arr[0];
    for(int i = 0 ; i < SIZE ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }   

    t4 = omp_get_wtime();

    printf("MAX: %d\n", max);
    printf("TIM: %lf\n", t4-t3);
}