#include <stdio.h>

int part(int *arr, int l, int h);
void qs(int *arr, int l, int h);
void swap(int *x, int *y);

int main(void){
    int x, i;
    printf("Enter number of elements: ");
    scanf("%d", &x);
    int arrr[x];
    for(i = 0; i < x; i++){
        printf("\nEnter element %d: ", i);
        scanf("%d", &arrr[i]);
    }

    

    printf("\nBefore sort\n");

    for(i = 0; i < x; i++){
        printf("%d, ", arrr[i]);
    }

    qs(arrr, 0, x-1);

    printf("\nAfter sort\n");

    for(i = 0; i < x; i++){
        printf("%d, ", arrr[i]);
    }
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int part(int *arr, int l, int h){
    int piv = arr[h];
    int i = l - 1, j;

    for(j = l; j < h; j++){
        if(arr[j] <= piv){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[h]);
    return i + 1;
}

void qs(int *arr, int l, int h){
    int partt;
    if(l<h){
        partt = part(arr, l, h);
        qs(arr, l, partt-1);
        qs(arr, partt+1, h);
    }
}
