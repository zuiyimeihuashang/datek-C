#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 100
int prime(int p) ;

int main()//beijing NO  ubuntuubuntuubuntuubuntuubuntuu Luck 11 
{
	int i,j,len,minn,maxn;
	char a[MAX];
	scanf("%s",a);
	len=strlen(a);int b[len];
	for(i=0;i<len;i++){
		for(j=0,b[i]=0;j<len;j++){
			if(a[i]==a[j]){
				b[i]=b[i]+1;
			}
		}
		if(i==1){
			minn=b[i];maxn=b[i];
		}
		minn=minn<b[i]?minn:b[i];
		maxn=maxn>b[i]?maxn:b[i];
	}
	i=maxn-minn;//printf("%d\n",i);
	if(prime(i)==1){
		printf("Lucky Word\n");
		printf("%d",i);
	}else{
		printf("No Answer\n");
		printf("0");
	}
	return 0;
}
int prime(int p) {//定义判断质数的函数 
	int i = 0, singer = 1;//定义了两个变量 
	double b = sqrt(p);//定义了一个double变量 

	if (p==2||p==3) {//如果是2,3则不是质数 
		singer = 1;//singer为1 
	} else if (p % 6 != 1 && p % 6 != 5) {//如果不在6X的附近 
		singer = 0;//一定不是质数 
	} else if (p > 0) {//保证大于0 
		for (i = 2; i <= b; i++) {//从2开始遍历 
			if (p % i == 0) {//如果能整除 
				singer = 0;//singer为1 
			}
		}
	}
	if(p==1)singer=0;

	return singer;//返回singer的值 
}
