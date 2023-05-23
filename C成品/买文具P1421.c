#include <stdio.h>// 头文件 

main() {//主函数 
	int a, b, c;//定义了三个变量 
	scanf("%d %d", &a, &b);//输入A B的值 
	c = a * 10 + b;//将为元转换为以角为单位 
	printf("%d", c / 19);//输出能买的数量 
	return 0;//主函数结束 
}
