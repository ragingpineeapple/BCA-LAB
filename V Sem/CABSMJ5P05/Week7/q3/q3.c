#include <stdio.h>

typedef struct {
    int pid;
    int prio;        
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
    int st;
    int comp;     
} Process;

int main() {
    int n, i;
    int ctt = 0;
    int compct = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    Process p[n];
    Process exec_order[n];

    for (i = 0; i < n; i++) {
        p[i].pid = i + 1;
        p[i].comp = 0;
        printf("Process %d: \n", p[i].pid);
        printf("prio");
        scanf("%d", &p[i].prio);
        printf("Arrival Time: ");
        scanf("%d", &p[i].at);
        printf("Burst Time: ");
        scanf("%d", &p[i].bt);
    }

    
    while (compct < n) {
        int highprio = -1;
        int min_prio = 1000000; 

        for (i = 0; i < n; i++) {
            if (p[i].at <= ctt && p[i].comp == 0) {
                
                if (p[i].prio < min_prio) {
                    min_prio = p[i].prio;
                    highprio = i;
                } 

                else if (p[i].prio == min_prio) {
                    if (p[i].at < p[highprio].at) {
                        highprio = i;
                    }
                }
            }
        }
        
        if (highprio != -1) {
            ctt += p[highprio].bt;
            
            p[highprio].ct = ctt;
            p[highprio].tat = p[highprio].ct - p[highprio].at;
            p[highprio].wt = p[highprio].tat - p[highprio].bt;
            
            p[highprio].st = p[highprio].wt; 
            
            p[highprio].comp = 1;
            exec_order[compct] = p[highprio];
            compct++;
        } 
        
        else {
            int next_arrival = 999999;
            for (i = 0; i < n; i++) {
                if (p[i].comp == 0 && p[i].at < next_arrival) {
                    next_arrival = p[i].at;
                }
            }
            ctt = next_arrival;
        }
    }

    printf("\nPID\tprio\tArrival\tBurst\tCompletion\tTurnaround\tStarvation(Wait)\n");
   
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t%d\t%d\t\t%d\t\t%d\n", 
               exec_order[i].pid, exec_order[i].prio, exec_order[i].at, 
               exec_order[i].bt, exec_order[i].ct, 
               exec_order[i].tat, exec_order[i].st);
    }

    return 0;
}
