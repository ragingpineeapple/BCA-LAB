#include <stdio.h>

struct processes{
    int pid;
    int at;
    int bt;
};

int part(struct processes *arr, int l, int h);
void qs(struct processes *arr, int l, int h);
void swap(int *x, int *y);

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
    }

    ct = 0;

    printf("PID AT  BT\n");
    for(i = 0; i < x; i++){
        printf("%d   %d   %d\n", p1[i].pid, p1[i].at, p1[i].bt);
    }

    qs(p1, 0, x-1);

    printf("AFTER SORT: \n");
    printf("PID AT  BT\n");
    for(i = 0; i < x; i++){
        printf("%d   %d   %d\n", p1[i].pid, p1[i].at, p1[i].bt);
    }
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