#include <stdio.h>
#include <stdlib.h>

typedef struct Process{
	struct Node *next;
	int pid;
	int at;
	int bt;
} Process;

Process *createproc(int pid, int at, int bt);
int nq(Process **p, int pid, int at, int bt);
Process *dq(Process *p);
void pq(Process **p);

int main(void){
	Process *p = NULL;
}

Process *createproc(int pid, int at, int bt){
	Process *proc = malloc(sizeof(Process *));
	if(proc == NULL){
		printf("Unable to allocate memory.\n");
		return NULL;
	}
	proc->pid = pid;
	proc->at = at;
	proc->bt = bt;

	return proc;
}

int nq(Process **p, int pid, int at, int bt){
	Process *nproc = createproc(pid, at, bt);

	if(nproc == NULL){
		return -69;
	}

	nproc->next = *p;
	*p = nproc;
	return 1;
}

Process *dq(Process *p){
	
}