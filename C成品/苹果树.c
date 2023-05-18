#include <stdio.h>// 函数头 

main()//主函数入口 
{	int a[10];//定义了一个数组 
	int i=0,cm=0;//定义了高度 
	for(i=0;i<10;i++){//读入数组 
		scanf("%d",&a[i]);//读入具体的数字 
	}
		scanf("%d",&cm);//读入身高 
	int cnt=0;//定义了一个计数器 
	for(i=0;i<10;i++){//历遍数组 
		if(a[i]<=cm+30){//如果能摘到苹果 
			cnt++;//计数 
		}
	}
	printf("%d",cnt);//输出结果 
	return 0;//主函数结束 
 } 
