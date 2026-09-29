#include <stdio.h>
#include <omp.h>

int main(){
    int x = 7, j, c = 0, i;
    char* words[] =  {"apple", "banana", "orange", "grape", "kiwi", "melon", "apricot"};

    char s = 'a';
    
    //printf("Size: %d", sizeof(words[0]));
    

    #pragma omp parallel for reduction(+:c) private(j)
    for(i = 0; i < x; i++){
        j = 0;
        while(words[i][j] != '\0'){
            if(words[i][j] == s){ 
                c++;
        	}
        	j++;
		}
    }

    printf("Count: %d\n", c);
}
