#include <stdio.h>//头文件 

int main() // 主函数入口 
{
	int M,N,i,cnt[10]={0};//定义了三个变量，和一个数组 
	scanf("%d %d",&M,&N);//输入MN 的值 
	for(i=M;i<=N;i++){//从M历遍到N 
		int t;//定义了一个中间变量 
		t=i;//将I赋给T 
		while(t){//如果T不为0 
			int t1=0;//定义了一个变量 
			t1=t%10;//取出最后一位数 
			cnt[t1]++;//计数 
			t/=10;//去除最后一位数 
		}
	}
	for(i=0;i<10;i++){//历遍数组 
		printf("%d ",cnt[i]);//输出结果 
	}
	return 0;//主函数结束 
}
