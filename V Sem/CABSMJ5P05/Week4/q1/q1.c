#include <stdio.h>

struct Processes{
    int pid;
    int arrival_time;
    int burst_time;
};

int main(void){
    int i, x;
    printf("Enter number of processes: ");
    scanf("%d", &x);

    struct Processes p1[x];

    for(i = 0; i < x; i++){ 
	printf("\nFor process %d\n\n", i);
	printf("Enter process id: ");
	scanf("%d", &p1[i].pid);
	printf("Enter process arrival time: ");
	scanf("%d", &p1[i].arrival_time);
	printf("Enter process burst_time: ");
	scanf("%d", &p1[i].burst_time); 
    }

    printf("\n-Printing processes-\n\n");
    for(i = 0; i < x; i++){
    	printf("\n-Process %d-\n\n"
            "Process id: %d\nProcess arrival time: %d\n"
            "Process burst_time:%d\n", 
        i, p1[i].pid, p1[i].arrival_time, p1[i].burst_time);
    }
}
