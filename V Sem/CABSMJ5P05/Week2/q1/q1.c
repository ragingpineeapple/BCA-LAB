#include <stdio.h>

int main(void){
	int s1, s2;
	double bt, it, utp;
	printf("Enter CPU busy time: ");
	s1 = scanf("%lf", &bt);
	printf("Enter CPU idle time: ");
	s2 = scanf("%lf", &it);
	
	if(s1 == 1 && s2 == 1){
		utp = ((bt)/(bt+it))*100;
	
		printf("The cpu uitilization is: %lf", utp);
	}
	else{
		printf("Enter double.");
	}
}
