#include <stdio.h>//头文件 

main()//主函数入口 
{	long long int a,b,x,i;//因为数据较大又有时间限制故选择了longlong 
	scanf("%lld %lld %lld",&a,&b,&x);//读入三个数 
	if(a%x==0){//判断能否整除 
		a=(a/x);//能的处理 
	}else{
		a=(a/x)+1;//不能的处理 
	}
	b=(b/x);//计算 
	printf("%lld",b-a+1);//输出结果 
	return 0;//主函数结束 
}
