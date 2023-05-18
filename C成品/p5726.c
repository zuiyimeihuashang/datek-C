#include <stdio.h>

int main()
{
	int n,min,max,sum=0,a,b,i;
	scanf("%d %d",&n,&a);
	sum+=a;min=a;max=a;
	for(i=0;i<n-1;i++){
		scanf("%d",&a);sum+=a;
		min=min<a?min:a;
		max=max>a?max:a;	
	}sum=sum-min-max;
	float N=(float)sum/(n-2);
	printf("%.2f",N);
	return 0;
}//5 9 5 6 8 9
