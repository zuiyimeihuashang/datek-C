#include <stdio.h>
int max(int a,int b);

main ()
{
	int x; 
	x=max(5,3);
	printf("%d\n",x);
	return 0;
}

int max(int a,int b)
{
	int ret=0;
	if(a>b){
		ret=a;
	}else{
		ret=b;
	}
	return ret;
}
