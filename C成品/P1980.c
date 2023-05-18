#include <stdio.h>//函数头 

main() {//主函数入口 
	int n, x,cnt=0,i=0;//定义了四个变量 
	scanf("%d %d", &n, &x);//读入两个数 
	for(i=1;i<=n;i++){//从1开始遍历 
		int e=i;//将I值赋给E 
		while(e){//判断有几个相同 
			if(e%10==x){//取出最后一位比较 
				cnt++;//计数 
			}
			e/=10;//去除最后一位数 
		}
	}

	printf("%d",cnt);//输出结果 
	return 0;//主函数结束 
}
