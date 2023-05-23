#include <stdio.h>//头文件 

int main()//主函数入口 
{
	int n,m,i,sum=0,sum1=0,sum2=0;//定义了六个变量 
	scanf("%d %d",&n,&m);//读入M N 
	int a[n];//定义 了一个数组 
	for(i=0;i<n;i++){//历遍数组 
		scanf("%d",&a[i]);//读入数值 
		if(i<m){//如果是前M个数 
			sum+=a[i];//求前M个数的和 
			if(i==m-1)sum1=sum;//将前M个数的和保存在SUM1中 
		}
		if(i>=m){//如果大于M个之后 
			sum2=sum1+a[i]-a[i-m];//计算sum2的值 
			sum=sum2<sum?sum2:sum;//比较找到最小值 
			sum1=sum2;//将新的sum值保存下来 
		}
	}
	printf("%d",sum);//输出结果 
	return 0;//主函数结束 
}
