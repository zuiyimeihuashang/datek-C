#include <stdio.h>//函数头 

main()//主函数 
{
	int a[3]={0},b[3]={0},i=0,j=0,singer=0;//定义两个数组来装坐标，singer来做信号 
	for(i=0;i<6;i++){//读入坐标 
		if(i<3){//第一个坐标 
			scanf("%d",&a[i]);//读入A数组	
		}else {
			scanf("%d",&b[i-3]);//读入第二个坐标 
			if(b[i-3]==1){//如果坐标是1 
				b[i-3]=0; //变为0 
			}else if(b[i-3]==0){//反之 
				b[i-3]=1; //变为1 
			}
		}	
	}
	for(i=0;i<3;i++){//历遍数组 
		if(a[i]!=b[i]){//如果坐标有不一个相同 
			singer=1;break;//令singer变为1结束循环 
		}
	}
	if(singer){//判断singer的值 
		printf("YES");//非0输出YES 
	}else{
		printf("NO"); //为0输出NO 
	}
	return 0;//主函数结束 
}
