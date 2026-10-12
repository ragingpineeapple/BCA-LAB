#include <stdio.h>
#define N 10
int main(){
//	int r[N]={0,2,3,1};
//	int r[N]={0,3,0,2};
	int r[N]={0,3,0,2,0,6,7,5};
	int i,j;
	for(i=0;i<N;i++) printf("%d ", r[i]);
	int c;
//	i=r[1];
//	while(c<=N && i!=0){
//		i=r[i];
//		c++;
//	}
//	printf("\n\n");
	for(j=1;j<N;j++){
		c=1;
		i=r[j];
//		printf("i%d\n",i);
		while(c<=N && i!=0){
//			printf("c%d ",c);
			i=r[i];
			c++;
		}
		if(c>N) break;
		
	}
	if(c>N) printf("\ndead");
	else printf("\nnot dead");
}
