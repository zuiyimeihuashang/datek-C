#include <stdio.h>

int main()
{
	int n,k,i,sum1=0,sum2=0,cnt1=0,cnt2=0;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++){
		if(i%k==0){
			cnt1++;
			sum1+=i;
		}else{
			cnt2++;
			sum2+=i;
		}			
	}//printf("%d %d",sum1,sum2);
	double a=0.0,b=0.0;
	a=(double)sum1/(double)cnt1;
	b=(double)sum2/(double)cnt2;
	printf("%.1lf %.1lf",a,b);
	return 0;
}
