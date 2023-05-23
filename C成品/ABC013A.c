#include <stdio.h>//头文件 

main() {//主函数 
	char zm =' ';//	定义了一个字符变量	
	scanf("%c",&zm);//读入zm的值 
	switch(zm){//用Switch函数 
	case 'A'://固定格式 
		printf("1\n");//输出 
		break; //结束 

	case 'B'://固定格式 
		printf("2\n");//输出 
		break; //结束 

	case 'C'://固定格式 
		printf("3\n");//输出 
		break; //结束 
	case 'D'://固定格式 
		printf("4\n");//输出 
		break; //结束 
	case 'E'://固定格式 
		printf("5\n");//输出 
		break; //结束 


	default://都不满足的情况 
		break;结束 
	}

	return 0;//主函数结束 
}
