#include <stdio.h>

struct Processes{
    int pid;
    double arrival_time;
    double burst_time;
};

void createproc(struct Processes *p, int x){
    int i;
    for(i = 0; i < x; i++){ 
	printf("For process %d", i);
	printf("\nEnter process id: ");
	scanf("%d", &p[i].pid);
	printf("\nEnter process arrival time: ");
	scanf("%lf", &p[i].arrival_time);
	printf("\nEnter process burst_time: ");
	scanf("%lf", &p[i].burst_time); 
    }
}

void printproc(struct Processes *p, int x){
    int i;
    for(i = 0; i < x; i++){
    	printf("Process %d\nProcess id: %d\nProcess arrival time: %.3lf\nProcess burst_time:%.3lf", i, p[i].pid, p[i].arrival_time, p[i].burst_time);
    }
}

int main(void){
    int i, x;
    printf("Enter number of processes: ");
    scanf("%d", &x);

    struct Processes p1[x];
    
    createproc(p1, x);
    printf("\n--Printing processes--\n");
    printproc(p1, x);

    
}
