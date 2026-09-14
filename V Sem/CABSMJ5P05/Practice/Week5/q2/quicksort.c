#include <stdio.h>

void swap(int *x, int *y);
int part(int *arr, int l, int h);
void qs(int *arr, int l, int h);

int main(void){
    int x, i;

    printf("Enter num of element: ");
    scanf("%d", &x);

    int arr[x];

    for(i = 0; i < x; i++){
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nBefore sorting\n");

    for(i = 0; i < x; i++){
        printf("%d, ", arr[i]);
    }

    printf("\nAfter sorting\n");

    qs(arr, 0, x-1);

    for(i = 0; i < x; i++){
        printf("%d, ", arr[i]);
    }

}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int part(int *arr, int l, int h){
    int piv = arr[h];
    int i = l -1, j;

    for(j = l; j < h; j++){
        if(arr[j] <= piv){
            i++;
            swap(&arr[i], &arr[j]);
        }
        
    }
    swap(&arr[i+1], &arr[h]);
    return i+1;
}

void qs(int *arr, int l, int h){
    int partt;
    
    if(l < h){
        partt = part(arr, l, h);
        qs(arr, l, partt - 1);
        qs(arr, partt + 1, h);
    }
}