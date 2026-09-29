#include <stdio.h>

int main(void){
	int n, i;
	printf("Enter number of processes: ");
	if(scanf("%d", &n) != 1){
		printf("Enter an integer!");
	}
	else{
		char arr[n][20];
		for(i = 0; i < n; i++){
			printf("Enter process %d name: ", i);
			scanf("%s", arr[i]);
		}

		printf("\nReady Queue:\n");

		for(i = 0; i < n; i++){
			printf("----");
		}
		printf("\n| ");
		for(i = 0; i < n; i++){
			printf("%s | ", arr[i]);
		}
		printf("\n");
		for(i = 0; i < n; i++){
			printf("----");
		}
		printf("\n");
	}	
}
