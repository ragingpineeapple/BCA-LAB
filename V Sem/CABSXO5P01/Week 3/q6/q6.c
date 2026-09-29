#include <stdio.h>
#include <math.h>

double calcpi(int x);

int main(void){
	int x=1000000;
	/*printf("Enter limit: ");
	scanf("%d", &x);*/
	
	printf("%lf", calcpi(x));
}

double calcpi(int x){
    int i;
	double pi=0;
    
    for(i = 0; i < x; i++){
    	pi+=(pow(-1, i) * 4.0)/(2.0*i + 1.0);
	}
	
	return pi;
}
