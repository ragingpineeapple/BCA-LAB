//Shortest process finger: Find and display the process with the shortest burst time.

#include <stdio.h>

int main(void){
    int n, i;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int times[n];

    printf("\n");

    for(i = 0; i < n; i++){
        printf("Enter burst time for process number %d: ", i+1);
        scanf("%d", &times[i]);
    }

    int smol = 0;

    for(i = 0; i < n; i++){
        if(times[i] < times[smol]){
            smol = i;
        }
    }

    printf("\nShortest process is process %d\n", smol+1);
}