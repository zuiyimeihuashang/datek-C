#include <stdio.h>//函数头 
#define p1 0.4463//第一梯队电费 
#define p2 0.4663 //第二梯队电费
#define p3 0.5663 //第三梯队电费

main()//主函数入口 
{
	double x,money=0;//定义了两个变量 
	scanf("%lf",&x);//读入用电数 
	if(x>400){//如果大于400 
		money=(x-400)*p3+(400-150)*p2+150*p1;//计算费用 
	}else if(x>150){//如果大于150 
		money=(x-150)*p2+150*p1;//计算费用
	}else{
		money=x*p1;//计算费用
	}
	printf("%.1lf",money);//输出结果 
	return 0;//主函数结束 
 } 
