#include <stdio.h>
#include <math.h>
#include <omp.h>

double pi(int x);

int main(void){
    int n=1000000;
    /*printf("Enter the place: ");
    scanf("%d", &n);*/

    printf("Pi: %lf", pi(n));
}

double pi(int x){
    int i;
    double p = 0;
    #pragma omp parallel for reduction(+:p)
    for(i = 0; i < x; i ++){
        p+= (pow(-1, i)*4.0)/((2.0*i)+1.0);
    }
    return p;
}