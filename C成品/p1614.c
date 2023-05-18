#include <stdio.h>

int main()
{//8 3  1 4 7 3 1 2 4 3
	int n,m,i,sum=0,sum1=0,sum2=0;
	scanf("%d %d",&n,&m);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(i<m){
			sum+=a[i];
			if(i==m-1)sum1=sum;
		}
		if(i>=m){
			sum2=sum1+a[i]-a[i-m];
			sum=sum2<sum?sum2:sum;
			sum1=sum2;
		}
	}
	printf("%d",sum);
	return 0;
}
