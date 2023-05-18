#include <stdio.h>
int main()
{int x;
//	printf("hour1小时min1分钟，hour2小时min2分钟");
	int hour1,min1;
	int hour2,min2;
	scanf("%d,%d",&hour1,&min1);
	scanf("%d,%d",&hour2,&min2);
	x=(hour1-hour2)*60+min1-min2;
   printf("%d\n",x);
   return 0;
}
