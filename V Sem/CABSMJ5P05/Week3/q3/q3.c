//Sort by arrival time: Sort processes based on arrival times in ascending order.

#include <stdio.h>

//Function declaration.
void sortit(int* arr, int n);
void swap(int *x, int *y);

int main(void){
    int n, i;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int times[n];

    printf("\n");

    for(i = 0; i < n; i++){
        printf("Enter arrival time for process number %d: ", i+1);
        scanf("%d", &times[i]);
    }

    sortit(times, n);

    for(i = 0; i < n; i++){
        printf("Process %d\n", times[i]);
    }
}

//Deferencing pointer for swapping.
void swap(int *x, int *y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

//Sorts using bubble sort.
void sortit(int* arr, int n){
    int i, j;

    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){
            if(arr[j]>arr[j+1]){
                //Passing the pointer to the swap function.
                swap(&arr[j], &arr[j+1s]);
            }
        }
    }
}