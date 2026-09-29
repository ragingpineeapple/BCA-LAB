#include <stdio.h>

struct Processes{
    int pid;
    int arrival_time;
    int burst_time;
};

void createproc(struct Processes *p, int x);
void printproc(struct Processes *p, int x);

int main(void){
    int i, x;
    printf("Enter number of processes: ");
    scanf("%d", &x);

    struct Processes p1[x];
    
    createproc(p1, x);
    printf("\n--Printing processes--\n");
    printproc(p1, x);

    int small = 0;

    for(i = 1; i < x; i++){
        if(p1[small].burst_time > p1[i].burst_time){
            small = i;
        }
    }

    printf("\n\nShortest burst time is of process number: %d\n", 
        p1[small].pid);
    
}

void createproc(struct Processes *p, int x){
    int i;
    for(i = 0; i < x; i++){ 
	printf("For process %d", i);
	printf("\nEnter process id: ");
	scanf("%d", &p[i].pid);
	printf("\nEnter process arrival time: ");
	scanf("%d", &p[i].arrival_time);
	printf("\nEnter process burst_time: ");
	scanf("%d", &p[i].burst_time); 
    }
}

void printproc(struct Processes *p, int x){
    int i;
    for(i = 0; i < x; i++){
    	printf("\nProcess %d\nProcess id: %d\n"
            "Process arrival time: %d\n"
            "Process burst_time:%d", 
            i, p[i].pid, p[i].arrival_time, 
            p[i].burst_time);
    }
}