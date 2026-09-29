#include <stdio.h>

void sortit(int arr[][2], int n);
void swap(int *x, int *y);

int main(void){
    int n, i;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int times[n][2];

    printf("\n");
    for(i = 0; i < n; i++){
        printf("Enter arrival time for process number %d: ", i+1);
        times[i][0] = i+1;
        scanf("%d", &times[i][1]);
    }

    sortit(times, n);

    printf("\nExecution order: \n\n");
    for(i = 0; i < n; i++){
        printf("Process %d\n", times[i][0]);
    }
}

void swap(int *x, int *y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

void sortit(int arr[][2], int n){
    int i, j;

    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){
            if(arr[j][1]>arr[j+1][1]){
                swap(&arr[j][0], &arr[j+1][0]);
                swap(&arr[j][1], &arr[j+1][1]);
            }
        }
    }
}