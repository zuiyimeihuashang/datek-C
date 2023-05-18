#include <stdio.h>

int main()
{
	int n,i=0,j=0,k=0;
	scanf("%d",&n);
	int a[n+2][n+2];
	for(i=0;i<n+2;i++){
		for(j=0;j<n+2;j++){
			a[i][j]=0;
		}
	}i=1;j=0;k=1;int N=n*n;
	while (k<=N)
	{
		while(j<n&&!a[i][j+1]){
			a[i][++j]=k++;
		}
		while(i<n&&!a[i+1][j])a[++i][j]=k++;
		while(j>1&&!a[i][j-1])a[i][--j]=k++;
		while(i>1&&!a[i-1][j])a[--i][j]=k++;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%3d",a[i][j]);//printf("%3d ",a[i][j]);%3d后多了一个空格 
		}//Wrong Answer.wrong answer On line 1 column 6, read (ASCII 32), expected 2.读到的是机内码32应该是2 
		if(i<n)printf("\n");
	}
	return 0;
 } 
