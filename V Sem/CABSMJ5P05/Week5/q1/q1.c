#include <stdio.h>

struct process{
    int pid;
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
};

void createproc(struct process *p1, int x);
void displayproc(struct process *p1, int x);

int main(void){
    int x;
    printf("Enter the number of processes: ");
    scanf("%d", &x);

    struct process p1[x];

    createproc(p1, x);
    displayproc(p1, x);
}

void createproc(struct process *p1, int x){
    int i;
    for(i = 0; i < x; i++){
        printf("Enter pid: ");
        scanf("%d", &p1[i].pid);
        printf("Enter arrival time: ");
        scanf("%d", &p1[i].at);
        printf("Enter burst time: ");
        scanf("%d", &p1[i].bt);
        printf("Enter completion time: ");
        scanf("%d", &p1[i].ct);
        p1[i].tat = p1[i].ct - p1[i].at;
        p1[i].wt = p1[i].tat - p1[i].bt;
    }
}

void displayproc(struct process *p1, int x){
    int i;
    for(i = 0; i < x; i++){
        printf("\n\npid: %d", p1[i].pid);
        printf("\nArrival Time: %d th", p1[i].at);
        printf("\nBurst Time: %d s", p1[i].bt);
        printf("\nCompletion Time: %d th", p1[i].ct);
        printf("\nTurnaround Time: %d s", p1[i].tat);
        printf("\nWaiting Time: %d s\n", p1[i].wt);
    }
}