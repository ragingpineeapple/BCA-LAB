#include <stdio.h>

int main(void){
    int x, stat;

    printf("Enter PID: ");
    stat = scanf("%d", &x);
    if(stat == 0){
    	printf("Please input an integer!\n");
    	return 0;
    }
    else if(x%2 == 0){
	printf("System Process \n");
    }
    else{
        printf("User Process \n");
    }
}
