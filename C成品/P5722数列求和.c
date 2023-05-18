#include <stdio.h>//函数头 

main() {//主函数入口 
	int a, i, sum = 0;//定义了三个变量 
	scanf("%d", &a);//读入数字 

	for (i = 1; i <= a; i++) {//累加 
		sum += i;//求和 
	}

	printf("%d", sum);//输出结果 
	return 0;//主函数结束 
}
