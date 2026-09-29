#include <stdio.h>

int facto(int x);

int main(void){

    int x;
    printf("Enter num: ");
    scanf("%d", &x);

    printf("Factorial of %d is %d\n", x, facto(x));
}

int facto(int x){
    int i, fac = 1;

    for(i = x; i > 0; i--){
        fac *= i;
    }

    return fac;
}