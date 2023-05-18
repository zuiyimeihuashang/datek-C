#include <stdio.h>
main ()
{
	int a=0;
	printf("请输入一个三位数:");
	scanf("%d",&a);
	int x=0;
	int i=0;
	while(i<3){
		x=a%10;	
		a=a/10;
		i++;
		printf("%d\n","x");
	}
	
//	printf("\n");
	return 0;
}
