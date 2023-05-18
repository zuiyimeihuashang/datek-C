#include <stdio.h>// 头文件 
#define pi 3.14//定义全局常量 pi
#define water 20000//定义全局常量 water 
main()//主函数入口 
{	int r=0,h=0;//定义了两个int型变量 
	double t=0;//定义一个double变量 
	scanf("%d %d",&h,&r);//读入高和半径 
	t=water/(pi*r*r*h);//计算需要的桶数 
	if(0==t-(int)t){//条件是如是整桶 
		printf("%.0f",t);//输出桶数 
	}else{
		printf("%.0f",t+1);//输出桶数加一桶 
	}
	return 0;//主函数结束 
}
