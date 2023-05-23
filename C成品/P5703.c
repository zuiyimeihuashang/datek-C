#include <stdio.h>//头文件 

main() {//主函数 
	int a = 0, b = 0, c;//A B分别是价格和单价，C用来装总价 
	scanf("%d %d", &a, &b);//写入A B的值 
	c = a * b;//计算总价 
	printf("%d", c);//输出总价 
	return 0;//主函数结束 
}
