#include <stdio.h>
#include <omp.h>

int perfecto(int x);

int main(void){
    int n, i;

    printf("Enter the number of numbers: ");
    scanf("%d", &n);

    int num[n];

    for(i = 0; i < n; i++){
        printf("Enter number %d: ", i);
        scanf("%d", &num[i]);
    }

    #pragma omp parallel for
    for(i = 0; i < n; i++){
        if(perfecto(num[i]) == 1){
            printf("%d, ", num[i]);
        }
    }

    //printf("%d", perfecto(6));


}

int perfecto(int x){
    int i, sum=0;
    //#pragma omp parallel for reduction(+:sum)
    for(i = 1; i <= x/2; i++){
        if(x%i == 0){
            sum += i;
        }
    }

    if(x == sum){
        return 1;
    }
    return 0;
}