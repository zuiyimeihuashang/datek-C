#include <stdio.h>

int main()//6 1 1 4 5 1 4
{
	int min,max,i,n;
	scanf("%d %d",&n,&min);
	max=min;
	for(i=1;i<n;i++){
		int in;
		scanf("%d",&in);
		min=min<in?min:in;
		max=max>in?max:in;
	}
	printf("%d",max-min);
	
	return 0;
}
