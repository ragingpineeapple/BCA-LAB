#include <stdio.h>

typedef struct Process{
    int pid;
    int at;
    int bt;
    int tat;
} Proc;

void printproc(Proc p[], int x);

int main(void){
    int x;
    printf("Enter number of processes: ");
    scanf("%d", &x);

    Proc p[x];


}

void printproc(Proc p[], int x){
    
}