#include <stdio.h>//函数头 

main()//主函数入口 
{	int m,t,s;//定义了三个变量 
	const int c=0;//定义了一个常变量 
	scanf("%d %d %d",&m,&t,&s);//读入三个变量 
	if(t==0){//如果时间为0特判 
		printf("%d",c)//;	输出0 
	}else if((m-s/t)>0){//如果苹果有剩余 
		if(s%t!=0){//如果吃苹果不是整数 
			printf("%d",m-s/t-1);//输出剩余苹果数 
		}else{
			printf("%d",m-s/t);//输出剩余苹果数 
		}
	}else {
		printf("%d",c);	//输出剩余苹果数，无剩余 
	}
	return 0;//主函数结束 
 } 
