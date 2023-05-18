#include <stdio.h>
#include <string.h>
#define zero 48

//void add(char* c,char *sum);//两个数相加，结果保存在后一个数中 
//void chengfa(char a[100],char b[100]);//两个数相乘，结果保存在后一个数中 

int main()
{
	int n,i,j;
	long long int sum=0,a=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a*=i;		printf("%d的阶乘是：%lld\n",i,a);
		sum+=a;		printf("%d的阶乘的和是%lld\n",i,sum);
	}	
//	printf("%lld",sum);
	return 0;
}

