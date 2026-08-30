#include <stdio.h>

int main(void){
    int process, ms, stat;

    printf("Enter processes and switching time in format (processes time): ");
    stat = scanf("%d %d", &process, &ms);
 
    if(stat == 0){
	printf("Please input an integer!\n");
    }

    printf("Total overhead: %d\n", (process-1)*ms);
}
