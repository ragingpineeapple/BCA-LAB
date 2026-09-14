#include <stdio.h>
#include <math.h>

int strongque(int x);

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
        if(strongque(num[i]) == 1){
        printf("\n%d 's ARM IS STRONG!\n", num[i]);
        }
        else{
            printf("\%d is weak :(\n", num[i]);
        }
    }
}

int strongque(int x){
    int temp = x, digi = 0, arm = 0, i;

    while(x != 0){
        digi++;
        x /= 10;
    }

    x = temp;

    while(x != 0){
        arm += pow(x%10, digi);
        x /= 10;
    }

    if(temp == arm){
        return 1;
    }

    return 0;
}