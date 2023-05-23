#include <stdio.h>

int main()
{
	int n,i,j,N,k=1;
	scanf("%d",&n);
	N=n*n;
	for(i=1;i<=N;i++){
		if(i<10){
			printf("0");
		}
		printf("%d",i);
		if(i%n==0){
			printf("\n");
		}
	}
	printf("             \n");
	for(i=1;i<=n;i++){
		for(j=0;j<2*(n-i);j++){
			printf(" ");		
		}
		for(j=0;j<i;j++){
			if(k<10){
				printf("0");
			}
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
	return 0;
 } 
