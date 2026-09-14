#include <stdio.h>

struct process
{
    int pid;
    double at;
    double bt;
    double ct;
    double tat;
    double wt;
};

void createproc(struct process *p1, int x);
void displayproc(struct process *p1, int x);
void gantt(struct process *p1, int x, int *res);
int main(void)
{
    int x;
    printf("Enter the number of processes: ");
    scanf("%d", &x);
    int res[x];
    struct process p1[x];

    createproc(p1, x);
    // displayproc(p1, x);
    gantt(p1, x, res);

    /*printf("YE");

    for(int i = 0; i < x; i++){
        printf("%d, ", res[i]);
    }*/
}

void createproc(struct process *p1, int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        printf("Enter pid: ");
        scanf("%d", &p1[i].pid);
        printf("Enter arrival time: ");
        scanf("%lf", &p1[i].at);
        printf("Enter burst time: ");
        scanf("%lf", &p1[i].bt);
        // printf("Enter completion time: ");
        // scanf("%lf", &p1[i].ct);
        p1[i].ct = p1[i].at + p1[i].bt;
        p1[i].tat = p1[i].ct - p1[i].at;
        p1[i].wt = p1[i].tat - p1[i].bt;
    }
}

void displayproc(struct process *p1, int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        printf("\n\npid: %d", p1[i].pid);
        printf("\nArrival Time: %.3lf th", p1[i].at);
        printf("\nBurst Time: %.3lf s", p1[i].bt);
        printf("\nCompletion Time: %.3lf th", p1[i].ct);
        printf("\nTurnaround Time: %.3lf s", p1[i].tat);
        printf("\nWaiting Time: %.3lf s\n", p1[i].wt);
    }
}

void gantt(struct process *p1, int x, int *res)
{
    int tt = 0, i, j, at = 0, least;
    //int arr=0;

    for(i = 0; i < x; i++){
        tt += p1[i].bt;
    }

    for(i = 0; i < x; i++){
        printf("----");
    }

    printf("\n|");

    while(at < tt){
        for(i = 0; i < x; i++){
            if(p1[i].at > at){
                at++;
                tt++;
            }
            else if(p1[i].bt != 0 && p1[i].at <= at){
                    least = i;
                    for(j = 0; j < x; j++){
                        if(p1[j].at > at){
                            break;
                        }
                        else if(p1[j].bt != 0 && p1[j].at <= at && p1[j].bt < p1[least].bt){
                            least = j;
                        }
                    }
                printf(" %d |", p1[least].pid);
                //res[arr] = p1[least].pid;
                at += p1[least].bt;
                p1[least].bt = 0;
                //arr++;
            }  
        }
    }
    printf("\n");

    for(i = 0; i < x; i++){
        printf("----");
    }

    printf("\n");

}

