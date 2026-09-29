#include <stdio.h>

int main(void){
    int sec, hr=0, min=0, stat;
    printf("Enter time in seconds: ");
    stat = scanf("%d", &sec);
    if(stat == 0){
    	printf("Input must be an int!\n");
	return 0;
    }
    hr = sec / 3600;          
    min = (sec % 3600) / 60;  
    sec = sec % 60;
    printf("Hours: %d, Min: %d, Seconds: %d\n", hr, min, sec);
}
