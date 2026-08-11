#include <stdio.h>

int main(void){
    int input, temp, reverse = 0;

    printf("Enter the number: ");
    scanf("%d", &input);

    temp = input;

    while(input!=0){
        reverse = (input % 10) + (reverse * 10);
        input /= 10;
    }

    if(temp == reverse){
        printf("The number is a palindrome!");
    }
    else{
        printf("The number is NOT a palindrome!");
    }
}