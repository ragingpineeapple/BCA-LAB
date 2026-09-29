#include <stdio.h>

struct proc{
    int pid;
    int at;
    int bt;
    int ct;
    int comp;
};

void exec(struct proc p[], int x);
void gantt(int arr[][3], int x);

int main(void){
    int x;
    printf("Enter number of processes: ");
    scanf("%d", &x);
    struct proc p1[x];

    for(int i = 0; i < x; i++){
        printf("Enter process %i, at, and bt: ", i);
        scanf("%d %d", &p1[i].at, &p1[i].bt);
        p1[i].comp = 0;
    }

    exec(p1, x);
}

void gantt(int arr[][3], int x){
    int i;
    for(i = 0; i < x; i++){
        printf("%d, ", arr[i][0]);
    }

    printf("\n\n");

    for(i = 0; i < x; i++){
        printf("%d, ", arr[i][1]);
    }

    printf("\n\n");

    for(i = 0; i < x; i++){
        printf("%d, ", arr[i][2]);
    }

    printf("\n\n");

}

void exec(struct proc p[], int x){
    int proc=0, i, index, min_bt, ct=0, procs[x][3], c=0, min_at;

    while(proc < x){
        index = -1;
        min_bt = 99999;
        for(i = 0; i < x; i++){
            if(p[i].at <= ct && p[i].comp != 1){
                if(p[i].bt < min_bt){
                    min_bt = p[i].bt;
                    index = i;
                }
                else if(p[i].bt == min_bt){
                    if(p[i].at < p[index].at){
                        index = i;
                    }
                }
            }
        }

        if(index != -1){
            procs[c][0] = ct;
            procs[c][1] = index;
            ct += p[index].bt;
            procs[c][2] = ct;
            p[index].comp = 1;
            p[index].ct = ct;
            proc++;
            c++;
        }
        else{
            int min_at = 99999;
            for(i = 0; i < x; i++){
                if(p[i].at <= min_at && p[i].comp != 1){
                    min_at = p[i].at;
                }
            }
            ct = min_at;
        }
    }

    gantt(procs, x);
}