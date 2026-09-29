#include <stdio.h>

int main(void){
	int i, arr[5][2], x = 0;
	
	printf("Priority:\n1-Highest\n2-Medium\n3-Low\n\n");
	
	for(i = 0; i < 5; i++){
		printf("Enter priority of process %d: ", i);
		arr[i][0] = i;
		if(scanf("%d", &arr[i][1]) != 1){
			printf("Enter an integer!");
		}
	}
	
	for(i = 0; i < 5; i++){
		if(arr[i][1]<arr[x][1]){
			x = i;
		}	
	}
	
	printf("\nProcess %d will be ran first\n", x);
}

