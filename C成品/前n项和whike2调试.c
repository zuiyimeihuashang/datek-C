#include <stdio.h>
int main()
{
	int n;
	double i=1.0;
	double j=1.0;
	double sum=0.0;
	
	printf("ÇëÊäÈënµÄÖµ:");
	scanf("%d",&n);
	
	while(j<=n){
		sum+=i;
		j++;
		i=1.0/j;
	//	sum+=i;	
	//	j++;
		
	}
	
   printf("%f\n",sum);
   return 0;
}
