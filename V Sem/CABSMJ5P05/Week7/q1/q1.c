#include <stdio.h>
#include <stdlib.h>

typedef struct Process{
	int pid;
	int at;
	int bt;
	int rem;
	int ct;
}Proc;

void rr(Proc *p, int x, int q);
void printp(Proc *p, int x);
int main(void){
	int x, i, q;
	 
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
	}
	
	printf("Enter quantum time: ");
	scanf("%d", &q);
	
	printp(p, x);
	rr(p, x, q);
}

void printp(Proc *p, int x){
	int i;
	
	printf("PID | AT | BT\n");
	
	for(i = 0; i < x; i++){
		printf("%d | %d | %d\n", p[i].pid, p[i].at, p[i].bt);
	}
}

void rr(Proc *p, int x, int q){
	int curr = 0, comp = 0, i;
	printf("\n| ");
	while(comp < x){
		for(i = 0; i < x; i++){
			if(p[i].rem>0){
				if(p[i].rem > q){
					printf("P%d |", p[i].pid);
					curr += q;
					p[i].rem -= q;		
				}
				
				else{
					printf(" P%d |", p[i].pid);
					curr += p[i].rem;
					p[i].ct = curr;
					p[i].rem = 0;
					comp++;
				}
			}
		}
	}
printf("\n");
}
