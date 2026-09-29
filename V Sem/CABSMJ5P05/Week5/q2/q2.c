#include <stdio.h>

struct processes{
    int pid;
    int at;
    int bt;
};

int part(struct processes *arr, int l, int h);
void qs(struct processes *arr, int l, int h);
void swap(int *x, int *y);
void exec(struct processes *arr, int l, int tt);

int main(void){
    int x, i, tt;

    printf("Enter number of processes: ");
    scanf("%d", &x);

    struct processes p1[x];
    tt=0;
    for(i = 0; i < x; i++){
        printf("Enter pid, at and bt (pid at bt): ");
        scanf("%d %d %d", &p1[i].pid, &p1[i].at, &p1[i].bt);
        tt += p1[i].bt;
    }

    qs(p1, 0, x-1);
    
    exec(p1, x, tt);

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

    printf("\n\n");
}

void exec(struct processes *arr, int l, int tt){
    int time[tt*2][3], ct = 0, i, j, k = 0;

    printf("\n\n");

    while(ct < tt){
        for(i = 0 ; i < l; i++){
            if(arr[i].bt != 0 && arr[i].at <= ct){
                time[k][0] = ct;
                ct += arr[i].bt;
                time[k][2] = ct;
                time[k][1] = arr[i].pid;
                arr[i].bt = 0;
                k++;
                
            }  
        }
        if(ct == tt){
            break;
        }
        time[k][0] = ct;
        time[k][1] = -1;   
        ct ++;
        time[k][2] = ct;
        k++;
        tt ++;
    }

    gantt(time, k);
    
}