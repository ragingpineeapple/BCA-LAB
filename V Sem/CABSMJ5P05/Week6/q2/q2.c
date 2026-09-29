#include <stdio.h>

struct processes{
    int pid;
    int at;
    int bt;
    int comp;
};

int part(struct processes *arr, int l, int h);
void qs(struct processes *arr, int l, int h);
void swap(int *x, int *y);
void exec(struct processes *p, int l);

int main(void){
    int x, i, j, tt, ct, com;

    printf("Enter number of processes: ");
    scanf("%d", &x);

    struct processes p1[x];
    tt=0;
    for(i = 0; i < x; i++){
        printf("Enter pid, at and bt (pid at bt): ");
        scanf("%d %d %d", &p1[i].pid, &p1[i].at, &p1[i].bt);
        tt += p1[i].bt;

        com = 0;
    }

    ct = 0;

    qs(p1, 0, x-1);
    
    exec(p1, x);

}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int part(struct processes *arr, int l, int h){
    int piv = arr[h].at;
    int i = l - 1, j;

    for(j = l; j < h; j++){
        if(arr[j].at <= piv){
            i++;
            swap(&arr[i].pid, &arr[j].pid);
            swap(&arr[i].at, &arr[j].at);
            swap(&arr[i].bt, &arr[j].bt);
        }
    }
    swap(&arr[i+1].pid, &arr[h].pid);
    swap(&arr[i+1].at, &arr[h].at);
    swap(&arr[i+1].bt, &arr[h].bt);
    return i + 1;
}

void qs(struct processes *arr, int l, int h){
    int partt;
    if(l<h){
        partt = part(arr, l, h);
        qs(arr, l, partt-1);
        qs(arr, partt+1, h);
    }
}

void gantt(int time[][3], int k){
    int i;
    printf(" ");
    for(i = 0; i < k; i++){
        printf("-----");
    }

    printf("\n|");
    for(i = 0; i < k; i++){
        if(time[i][1] == -1){
            printf("IDLE|");
        }
        else{
            printf("P%d  |", time[i][1]);
        }
    }

    printf("\n ");
    
    for(i = 0; i < k; i++){
        printf("-----");
    }

    printf("\n%d    ", time[0][0]);

    for(i = 0; i < k; i++){
        printf("%d    ", time[i][2]);
    }
}

void exec(struct processes *p, int l){
    int i, proc=0, ct=0, procs[l][3], c=0;

    while(proc < l){
        for(i = 0; i < l; i++){
            if(ct < p[i].at){
                procs[c][0] = ct;
                procs[c][1] = -1;
                ct = p[i].at;
                procs[c][3] = ct;
            }
            else if(p[i].comp != 1 && p[i].at <= ct){
                p[i].comp = 1;
                procs[c][0] = ct;
                procs[c][0] = ct;
                procs[c][1] = p[i].pid;
                ct += p[i].bt;
                procs[c][2] = ct;
                proc++;
                c++;
            }
        }
    }

    gantt(procs, l);
}