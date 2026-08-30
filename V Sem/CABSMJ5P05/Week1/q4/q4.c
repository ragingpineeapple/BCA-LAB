#include <stdio.h>

int main(void){
    int printers, users;

    printf("Enter printers and users in format(prin user): ");
    if(scanf("%d %d", &printers, &users)==0){
	printf("Enter an integer!");
	return 0;
    }

    printf("%d\n", printers/users);
}
