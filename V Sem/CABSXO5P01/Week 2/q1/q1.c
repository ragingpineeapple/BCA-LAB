/*Write an interactive program in C to convert a decimal number to binary, octal, and hex-
adecimal systems.*/

#include <stdio.h>
#include <math.h>

int tobin(int x){
    int bin = 0, i;
    for (i = 0; x > 0; i++){
        bin += (x%2) * pow(10, i);
        x/=2;
    }
    return bin;
}

int tooct(int x){
    int oct = 0, i;
    for(i = 0; x > 0; i++){
        oct += (x%8) * pow(10, i);
        x/=8;
    }
    return oct;
}

int tohex(int n, int x, char* hex){
    int rem, i;
    for(i = 0; x > 0; i++){
        rem = x%16;
        if(rem < 10){
            hex[n-i-1] = rem + '0';
        }
        else{
            hex[n-i-1] = (rem-10) + 'A';
        }
        x/=16;
        //printf("REMAINDERRRRRR: %d\n", rem);
    }
    hex[i+1] = '\0';
    
	return 1;
}

void createarr(int count){
	char hex[count];
}

int main(void){
    int x, i;
    printf("Enter the number: ");
    scanf("%d", &x);
    
    char hex[22];
    
	char o;
    printf("Options\nB-Binary\nO-Octal\nH-HexaDecimal\n: ");
    scanf("%c");
    scanf("%c", &o);
    
    int n = x, count=0;
    
    switch (o){
    	case 'B':
    		printf("%d in binary: %d", x, tobin(x));
    		break;
    	case 'O':
    		printf("%d in octal: %d", x, tooct(x));
    		break;
    	case 'H':
    		
		    do{
		        n /= 10;
		        count++;
		    } while(n != 0);
		
		    createarr(count);
		
		    tohex(count, x, hex);
		    
		    for(i = 0; hex[i]!='\0'; i++){
        		printf("%c", hex[i]);
    		}
			break;
		default:
			printf("Enter correct option!");	
	}
    
}
