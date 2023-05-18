#include <stdio.h>//函数头 

main()//主函数入口 
{	int singer1=0,singer2=0,x;//定义了三个变量 
	scanf("%d",&x);//输入一个数 
	if(x%2==0){//如果是偶数 
		singer1=1;//令singer1值为1 
	}
	if(x>4&&x<=12){//如果X在4到12之间 
		singer2=1;//令singer2值为1 
	}
	if(singer1==1&&singer2==1){//判断A 
		printf("1 ");//输出1 
	}else{
		printf("0 ");//输出0 
	}
		if(singer1==1||singer2==1){//判断B
		printf("1 ");//输出1 
	}else{
		printf("0 ");//输出0 
	}
		if((singer1==0&&singer2==1)||(singer1==1&&singer2==0)){//判断C
		printf("1 ");//输出1 
	}else{
		printf("0 ");//输出0 
	}
		if(singer1==0&&singer2==0){//判断D
		printf("1 ");//输出1 
	}else{
		printf("0 ");//输出0 
	}
	return 0;//主函数结束 
}
