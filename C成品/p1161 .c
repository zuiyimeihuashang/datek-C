#include <stdio.h>//头文件 
#include <math.h>//头文件
#include <malloc.h>//头文件
#define SINGER -1//宏SINGER为-1 

main()//主函数入口 
{	int n,i,j,c;//定义了四个变量 
	scanf("%d",&n);//读入N值 
	double a[n];// 定义了一个数组 
	int* linght=(int*)malloc(2000000*sizeof(int));//申请了一个足够大的空间保存灯状态 
	for(i=0;i<2000000;i++){//历遍数组 
		linght[i]=-1;//初始化，以-1代表关灯 
	}
	int b[n];//定义一个数组 
	for(i=0;i<n;i++){//历遍数组 
		scanf("%lf",&a[i]);//读入 
		scanf("%d",&b[i]);//读入 
	}
	for(i=0;i<n;i++){//历遍数组 
		for(j=1;j<=b[i];j++){//历遍数组      
			c=(int)floor(j*1.0*a[i]);//找到需操作的灯的编号     
		linght[c]=linght[c]*SINGER;//按一次开关 
		}
	}
	for(i=0;i<2000000;i++){//历遍数组 
		if(linght[i]==1){//如果灯开 
			printf("%d ",i);break;//输出灯的编号并结束循环 
		}
	}
	return 0;//主函数结束 
}
