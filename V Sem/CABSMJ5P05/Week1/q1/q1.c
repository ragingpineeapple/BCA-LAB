#include <stdio.h>

int main(void){
    int sec, hr=0, min=0, stat;
    printf("Enter time in seconds: ");
    stat = scanf("%d", &sec);
    if(stat == 0){
    	printf("Input must be an int!\n");
	return 0;
    }
    while(sec > 60){
        min = sec/60;
	sec %= 60;
    }
    while(min > 60){
        hr = min/60;
        min %= 60;
    }
    printf("Hours: %d, Min: %d, Seconds: %d\n", hr, min, sec);
}
