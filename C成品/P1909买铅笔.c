#include <stdio.h>//函数头 

main()//主函数入口 
{	int n,a[6]={0},money[3]={0},i,j;//定义了三个变量和两个数组 
	scanf("%d",&n);//读入需要的铅笔数 
	for(i=0,j=0;i<6;i=i+2,j++){// 循环开始 
		scanf("%d %d",&a[i],&a[i+1]);//读入三种铅笔数和价钱
	if(n%a[i]!=0){//如果不能整除 
		a[i]=n/a[i]+1;//整除加一 
	}else{
		a[i]=n/a[i];//需要的数目 
	}
	money[j]=a[i]*a[i+1];//需要的钱 写入数组。 
	}
	for(i=0,n=money[i];i<2;i++){//循环开始 
		if(n>money[i+1]){//如果N较大 
			n=money[i+1];//N等于较小的数 
		}
	}
	printf("%d",n);//输出结果 
	return 0;//主函数结束 
}
