#include <stdio.h>
//#include <stdlib.h>
#define MAX 1000

int main()
{
	int n,i=0,j;
	int  a[MAX];
	scanf("%d",&n);//20 1 2 4 8 16 5 10 20
	a[i]=n;
	for(i=1;n!=1;i++){
		if(n%2==0){
			n/=2;
			a[i]=n;
		}else{
			n=n*3+1;
			a[i]=n;
		}
	}
	for(j=i-1;j>=0;j--){
		printf("%d ",a[j]);
	}	
//	free(a);
	return 0;
 } 
