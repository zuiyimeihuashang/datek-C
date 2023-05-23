#include <stdio.h>
int main()

	{int x;
	scanf("%d",&x);
//	x=123456; 
	int digit;
	int ret=0;
	
while(x>0){digit=x%10;	
	ret=ret*10+digit;
	x/=10;
//	printf("x=%d\n,digit=%d\n,ret=%d\n",x,digit,ret);
	
}
   printf("%d\n",ret);
   return 0;
}
