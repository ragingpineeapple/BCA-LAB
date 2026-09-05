//Burst time average: Input burst time for n processes and calculate total and average burst time.

#include <stdio.h>

int main(void){
    int n, i, tot = 0, avg;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int times[n];

    printf("\n");

    for(i = 0; i < n; i++){
        printf("Enter burst time for process number %d: ", i);
        scanf("%d", &times[i]);
        tot += times[i];
    }

    avg = tot/n;

    printf("\nTotal burst time: %d\nAverage burst time: %d\n", tot, avg);
}