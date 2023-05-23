#include <stdio.h>//库函数 

main()//主函数入口 
{
	int n;//定义int型变量 
	float c; //定义float型变量 
	scanf("%f %d",&c,&n);//读入可乐量和人数 
	c/=(float)n;//计算一个人能分到的可乐数 
	printf("%.3f\n",c);//输出能分到的可乐数 
	printf("%d ",n*2);//输出杯子数 
	return 0;//主函数结束 
 } 


