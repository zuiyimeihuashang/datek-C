#include <stdio.h>
int max(int,int);
main()
{
	int a=0,b=0,c=0;
	printf("请输入比较的俩个数：");
	scanf("%d,%d",&a,&b);
	c=max(a,b);
	printf("%d",c); 
	return 0;
}
int max(int a,int b)
{
	int c = 0;
	if(a>b){
		c=a;
	}else {c=b;
	}
	return c;

}
