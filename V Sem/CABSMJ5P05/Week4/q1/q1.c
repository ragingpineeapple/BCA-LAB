#include <stdio.h>

struct Processes{
    int pid;
    double arrival_time;
    double burst_time;
};

int main(void){
    int i, x;
    printf("Enter number of processes: ");
    scanf("%d", &x);

    struct Processes p1[x];

    for(i = 0; i < x; i++){ 
	printf("For process %d", i);
	printf("\nEnter process id: ");
	scanf("%d", &p1[i].pid);
	printf("\nEnter process arrival time: ");
	scanf("%lf", &p1[i].arrival_time);
	printf("\nEnter process burst_time: ");
	scanf("%lf", &p1[i].burst_time); 
    }
    printf("\n--Printing processes--\n");
    for(i = 0; i < x; i++){
    	printf("Process %d\nProcess id: %d\nProcess arrival time: %.3lf\nProcess burst_time:%.3lf", i, p1[i].pid, p1[i].arrival_time, p1[i].burst_time);
    }
}
