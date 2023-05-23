#include <stdio.h>

int main()
{
	int k,x,n,i;
	scanf("%d",&n);
	n=n/52;//printf("%d",n);
	for(i=1;;i++){
		x=n-21*i;
		if(x%7==0&&x/7>=1&&x/7<=100){
			k=i;
			break;
		}
	}
	printf("%d\n",x/7);
	printf("%d",k);
	return 0;
}
