#include <stdio.h>// 头文件 

main()//主函数入口 
{
	int a,b,c,d,e;//定义四个变量来储存时和分 
	scanf("%d %d %d %d",&a,&b,&c,&d);//读入时和分 
	e=(c-a)*60+d-b;//计算相差的分钟 
	printf("%d %d",e/60,e%60);//对60取模得相差的分，取余得时。 
	return 0;//主函数结束 
}
