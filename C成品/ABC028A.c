#include <stdio.h>//头文件 

main() {//主函数 
	int zm = 0;//定义了一个变量 
	scanf("%d", &zm);//为变量赋值 

	if (zm == 100) {//特判断是否等于100 
		printf("Perfect\n");//是，输出Perfect 
	}  if (zm >= 90 &&zm<100) {//判断是否介于90到100之间 
		printf("Great\n");//是，输出 Great
	} if (zm >= 60&&zm<=89) {//判断是否介于60到89之间 
		printf("Good\n");//是，输出 Good
	}  if (zm >= 0&&zm < 60) {//判断是否介于0到60之间 
		printf("Bad\n");//是，输出 Bad
	}

	return 0;//主函数结束 
}
