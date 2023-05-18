#include <stdio.h>// 函数头 

main()//主函数入口 
{
	int year=0,singer=0;//定义了两个变量year和singer 
	scanf("%d",&year);//读入年份 
	if(year%4==0&&year%100!=0){//如果是非整百闰年 
		singer=1;//令singer为1 
	}else if(year%400==0){//如果是整百闰年 
		singer=1;//令singer为1 
	}
	printf("%d",singer);//输出singer的值 
	
	return 0;//主函数结束 
 } 
