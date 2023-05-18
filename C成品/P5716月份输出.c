#include <stdio.h>//头文件 
int runear(int year) ;//闰年判断函数声明 

main()//主函数入口 
{	int year,yue,singer=0;//定义了三个变量 
	scanf("%d %d",&year,&yue);//读入年份与月份 
	if(runear(year)==1){//如果调用函数是闰年 
		singer=1;//让singer为1 
	}
	if(yue==4||yue==6||yue==9||yue==11){//如果是30天的月份 
		printf("30");//输出30 
	}else if(yue==2){//如果是二月 
		if(singer==1){//如果是闰年 
			printf("29");//输出29 
		}else{
			printf("28");//不是闰年输出28 
		}
	}else{
		printf("31");//输出31 
	}
	
	return 0;//主函数结束 
 } 
int runear(int year) //闰年函数判断 
{
	int singer=0;//定义了两个变量singer 
	if(year%4==0&&year%100!=0){//如果是非整百闰年 
		singer=1;//令singer为1 
	}else if(year%400==0){//如果是整百闰年 
		singer=1;//令singer为1 
	}
	return singer;//函数结束，返回singer的值 
 } 
