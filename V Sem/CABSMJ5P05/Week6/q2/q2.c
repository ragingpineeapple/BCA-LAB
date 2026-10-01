#include<stdio.h>

struct process {
	int id;
	int arrivalTime;
	int burstTime;
	int turnAroundTime;
	int waitingTime;
};

void inputProcess(struct process p[], int n){
	int i;
	for(i = 0; i < n; i++){
		p[i].id = i + 1;
		printf("Enter arrival time and burst time for process %d: ", i + 1);
		scanf("%d %d", &p[i].arrivalTime, &p[i].burstTime);
	}
}

void sortByArrivalTime(struct process p[], int n){
	int i, j;
	struct process temp;
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - i -1; j++){
			if(p[j].arrivalTime > p[j + 1].arrivalTime){
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}

void calculateTime(struct process p[], int n){
	int i;
	int time = 0;
	sortByArrivalTime(p, n);
	for(i = 0; i < n; i++){
		if(time < p[i].arrivalTime){
			time = p[i].arrivalTime;
		}
		time += p[i].burstTime;
		p[i].turnAroundTime = time - p[i].arrivalTime;
		p[i].waitingTime = p[i].turnAroundTime - p[i].burstTime;
	}
}

void displayAllProcesses(struct process p[], int n){
	int i;
	double avgWT, avgTAT;
	int sumWT = 0, sumTAT = 0;
	printf("\nProcess\tArrivalTime\tBurstTime\tTAT\tWaitingTime\n");
	for(i = 0; i < n; i++){
		sumWT += p[i].waitingTime;
		sumTAT += p[i].turnAroundTime;
		
		printf("P%d\t%d\t\t%d\t\t%d\t\t%d\n", 
			p[i].id, 
			p[i].arrivalTime, 
			p[i].burstTime, 
			p[i].turnAroundTime, 
			p[i].waitingTime);
	}
	avgWT = (double) sumWT / n;
	avgTAT = (double) sumTAT / n;
	printf("Average Waiting Time: %.2f\nAverage Turn Around Time: %.2f\n", avgWT, avgTAT);
}

int main(){
	int n, i;
	printf("Enter number of processes: ") ;
	scanf("%d", &n);

	struct process p[n];
	inputProcess(p, n);
	calculateTime(p, n);
	printf("\nFCFS:\n");
	displayAllProcesses(p, n);

	return 0;
}
