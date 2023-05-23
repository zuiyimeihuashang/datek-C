#include <stdio.h>

int main()
{
	int n,k,i,sum1=0,sum2=0;
	scanf("%d %d",&n,&k);i=n/k;
	sum1=n*(n+1)/2;//336 4714
	sum2=(i*(i+1)/2)*k;
	sum1=sum1-sum2;	//printf("%d %d",sum1,sum2);
	double cnt1=n-i,cnt2=i;
	cnt1=sum1/cnt1;cnt2=sum2/cnt2;
	printf("%.1llf %.1llf",cnt2,cnt1);
	return 0;
}
