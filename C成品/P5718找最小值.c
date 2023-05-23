#include <stdio.h>//函数头 

main() {//主函数入口 
	int N, i, min = 0, b;//定义了四个变量 
	scanf("%d %d", &N, &min);//读入个数和第一个数 
	for (i = 1; i < N; i++) {//循环读入 
		scanf("%d", &b);//读入新值 
		min = min < b ? min : b;//min等于较小的值 
	}
	printf("%d", min);//输出结果 
	return 0;//主函数结束 
}
