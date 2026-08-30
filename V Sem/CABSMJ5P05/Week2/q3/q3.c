#include <stdio.h>

int main(void){
	int n;
	double t;
	
	int s1, s2;
	
	printf("Enter number of processes: ");
	s1 = scanf("%d", &n);
	printf("Enter time: ");
	s2 = scanf("%lf", &t);
	
	if(s1 == 1 && s2 == 1){
		printf("Throughput: %lf", n/t);
	}
	else{
		printf("Processes should be an integer and time should be a float!");
	}
	
	
}
