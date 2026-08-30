#include <stdio.h>

int main(void){
    int sec, min, hr;
    printf("Enter time in seconds: ");
    scanf("%d", &sec);

    hr = sec / 3600;
    sec %= 3600;
    min = sec / 60;
    sec %= 60;
    
    printf("HH: %d, MM: %d, SS: %d\n", hr, min, sec);
}
