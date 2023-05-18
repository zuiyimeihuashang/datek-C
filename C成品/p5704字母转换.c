#include <stdio.h>//头文件 
main()//主函数入口 
{
	char a='\0';//定义了一个字符变量 
	scanf("%c",&a);//写入a的值 
	if(a>96){//大小写判断 
		printf("%c",a-32);//小转大 
	} else {
		printf("%c",a+32);//大转小 
	}
	return 0;//主函数结束 
 } 
