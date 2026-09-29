#include <stdio.h>

typedef struct Process{
    int pid;
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
} Process;

void qsort(Process *p, int l, int h);
int part(Process *p, int l, int h);
void swap(Process *p, Process *q);

void pq(Process *p, int x);

int main(void){
    int x;

    /*printf("Enter the number of processes: ");
    scanf("%d", &x);*/

    x = 4;

    Process procs[x];

    procs[0].pid = 0;
    procs[0].at = 2;
    procs[0].bt = 3;

    procs[1].pid = 1;
    procs[1].at = 0;
    procs[1].bt = 2;

    procs[2].pid = 2;
    procs[2].at = 5;
    procs[2].bt = 4;

    procs[3].pid = 3;
    procs[3].at = 4;
    procs[3].bt = 9;

    pq(procs, x);

    qsort(procs, 0, x-1);

    pq(procs, x);

    
}

void swap(Process *p, Process *q){
    Process temp = *p;

    *p = *q;
    *q = temp;
}

int part(Process *p, int l, int h){
    int pivot = p[h-1].at, i = l-1, j;

    for(j = l; j < h; j++){
        if(p[j].at <= pivot){
            i++;
            swap(&p[i], &p[j]);
        }
    }
    swap(&p[i+1], &p[h]);
    return i+1;

}

void qsort(Process *p, int l, int h){
    int partt;
    if(l<h){
        partt = part(p, l, h);
        qsort(p, l, partt-1);
        qsort(p, partt+1, h);
    }
}

void pq(Process *p, int x){
    int i;
    printf("pid at bt\n");
    for(i = 0; i < x; i++){
        printf("%d %d %d\n", p[i].pid, p[i].at, p[i].bt);
    }
}