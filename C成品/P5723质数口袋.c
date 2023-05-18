#include <stdio.h>// 函数头 
#include <math.h>//函数头 
int prime(int p);//声明判断质数的函数 

main() {//主函数入口 
	int ll, i, sum = 0, cnt=0;;//定义了四个变量 
	scanf("%d", &ll);//读入口袋大小 
if(ll>1){//保证大于1 
	for (i = 2; sum <= ll; i++) {//循环开始 
		if (prime(i) == 1) {//如果是质数 
			sum += i;//累加 
		if(sum>ll){//如果大于 口袋 
			break;//结束 
		}
		printf("%d\n", i);//输出质数 
		cnt++;//计数 
		}
	}
}
	printf("%d",cnt);//输出质数个数 
	return 0;//主函数结束 
}

int prime(int p) {//定义判断质数的函数 
	int i = 0, singer = 1;//定义了两个变量 
	double b = sqrt(p);//定义了一个double变量 

	if (p==2||p==3) {//如果是2,3则是质数 
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
