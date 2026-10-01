#include <stdio.h>
#include <stdlib.h>

typedef struct Process{
	int pid;
	int at;
	int bt;
	int rem;
	int ct;
	int prio;
}Proc;


void printp(Proc *p, int x);
void ps(Proc *p, int x);
void qs(Proc *p, int l, int h);
int part(Proc *p, int l, int h);
void swap(Proc *p, Proc *q);

int main(void){
	int x, i;
	 
	printf("Enter number of processes: ");
	scanf("%d", &x);
	
	Proc p[x];
	
	for(i = 0; i < x; i++){
		p[i].pid = i;
		printf("Enter at: ");
		scanf("%d", &p[i].at);
		printf("Enter bt: ");
		scanf("%d", &p[i].bt);
		p[i].rem = p[i].bt;
		printf("Enter priority: ");
		scanf("%d", &p[i].prio);
	}
	
	printp(p, x);
	ps(p, x);
}

void printp(Proc *p, int x){
	int i;
	
	printf("PID | AT | BT | PRIO\n");
	
	for(i = 0; i < x; i++){
		printf("%d | %d | %d | %d\n", p[i].pid, p[i].at, p[i].bt, p[i].prio);
	}

	
}

void ps(Proc *p, int x){
	qs(p, 0, x-1);
	int current_time = 0, i;
	printf("| ");
    for (i = 0; i < x; i++) {
        printf("Pid: %d | Prio: %d |", p[i].pid, p[i].prio);
        
        current_time += p[i].bt;
        
        p[i].ct = current_time;
    }

	printf("\n");
}

void swap(Proc *p, Proc *q){
	Proc temp = *p;
	*p = *q;
	*q = temp;
}

int part(Proc *p, int l, int h){
	int piv = p[h].prio, i = l-1, j;
	
	for(j = l; j < h; j++){
		if(p[j].prio <= piv){
			i++;
			swap(&p[i], &p[j]);
		}
	}
	swap(&p[i+1], &p[h]);
	return i+1;
}

void qs(Proc *p, int l, int h){
	int pt;
	if(l<h){
		pt = part(p, l, h);
		qs(p, l, pt-1);
		qs(p, pt+1, h);
	}
}
