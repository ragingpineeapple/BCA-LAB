#include <stdio.h>

struct Processes{
    int pid;
    int arrival_time;
    int burst_time;
    int completion_time;
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
	scanf("%d", &p1[i].arrival_time);
	printf("\nEnter process burst_time: ");
	scanf("%d", &p1[i].burst_time);
	p1[i].completion_time = p1[i].arrival_time + p1[i].burst_time; 
    }
    printf("\n--Printing processes--\n");
    for(i = 0; i < x; i++){
    	printf("Process %d\nProcess id: %d\n"
            "Process arrival time: %d\nProcess burst_time:%d\n"
            "Completion Time: %d\n", 
            i, p1[i].pid, p1[i].arrival_time, p1[i].burst_time,
            p1[i].completion_time);
    }
}
