#include <stdio.h>//头文件 

main() {//主函数 
	int a;//定义了一个变量A 
	scanf("%d", &a);//写入A的值 

	if (a <= 100 && a >= 1) {//保证A的范围 
		if (a % 2 != 0) {//A不是偶数 
			printf("NO");//输出 NO 
		} else if (a != 2) {//排除A=2的情况 
			printf("YES");//输出YES 
		} else//如A=2 
			printf("NO");//不满足输出NO 


		return 0;//主函数结束 
	}
}
