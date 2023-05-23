#include <stdio.h>

int main()
{
	long long int a[3]={1,1,1};
	int i,n;
	scanf("%d",&n);
	if(n>2){
		for(i=2;i<n;i++){
			a[2]=a[0]+a[1];//printf("%lld ",a[3]);
			a[0]=a[1];
			a[1]=a[2];
		}
	}
	if(n==0){
		a[2]=0;
	}
	printf("%ld",a[2]);
	printf(".00");
	return 0;
}
