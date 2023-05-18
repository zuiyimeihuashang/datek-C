#include <stdio.h>

void printfl();
main()
{
	int a,i,j,k,l;
	scanf("%d",&a);
	int b[a][a];
	for(i=0;i<a;i++){
	/**/	for(j=0;j<=i;j++){
			b[i][j]=0;
			if(j==0||i==j){
			b[i][j]=1;
			}
		}
	}
	for(i=0;i<a;i++){
		for(j=1;j<i;j++){
			if(j>0&&i>1&&i!=j)
			{
				b[i][j]=b[i-1][j-1]+b[i-1][j];
			}	
		}
	}
	for(i=0,k=a-1;i<a;i++){
		for(l=0;l<k;l++){
			printfl();
			}
		for(j=0;j<=i;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");k--;
	}
	return 0;
}
void printfl()
{
	printf(" ");
}
