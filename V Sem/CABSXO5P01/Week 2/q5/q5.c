#include <stdio.h>


int main(void){
	int i, arr[20], x;
	
	for(i = 0; i < 20; i++){
		printf("Enter element %d: ", i);
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < 20; i++){
		x = arr[i];
		if(arr[i]%2 == 0){
			printf("%d is even!\n", arr[i]);
		}
		else{
			printf("%d is odd!\n", arr[i]);
		}
	}
}
