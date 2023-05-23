#include <stdio.h>//头函数 

main() {//主函数 
	int a, b, c;//A B用来装别人的值，C临时容器 
	int n = 0;//初始化N 
	scanf("%d %d", &a, &b);//给AB赋值 

	if (a > b) {//找出A B的最大值 
		c = a;//最大值赋给C 
	} else {//找出A B的最大值
		c = b;//最大值赋给C
	}

	n = 7 - c;//N是有几种获胜的可怜能 

	if (n == 6) {//N等于6的情况 
		printf("1/1");//输出 
	} else if (n == 1 ) {//N等于1的情况 
		printf("1/6");//输出
	} else if (n == 2 ) {//N等于2的情况 
		printf("1/3");//输出
	} else if (n == 3 ) {//N等于3的情况 
		printf("1/2");//输出
	} else if (n == 4 ) {//N等于4的情况 
		printf("2/3");//输出
	} else if (n == 5) {//N等于5的情况 
		printf("5/6");//输出
	}

	return 0;//主函数结束 
}
