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
    printproc(p1, x);
}

void createproc(struct Processes *p, int x){
    int i;
    for(i = 0; i < x; i++){ 
	printf("\nFor process %d\n\n", i);
	printf("Enter process id: ");
	scanf("%d", &p[i].pid);
	printf("Enter process arrival time: ");
	scanf("%d", &p[i].arrival_time);
	printf("Enter process burst_time: ");
	scanf("%d", &p[i].burst_time); 
    }
}

void printproc(struct Processes *p, int x){
    int i;
    printf("\n-Printing processes-\n\n");
    for(i = 0; i < x; i++){
    	printf("\n-Process %d-\n\n"
            "Process id: %d\nProcess arrival time: %d\n"
            "Process burst_time:%d\n", 
        i, p[i].pid, p[i].arrival_time, p[i].burst_time);
    }
}
