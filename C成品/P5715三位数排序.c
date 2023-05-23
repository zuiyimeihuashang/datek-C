#include <stdio.h>// 函数头 
void  paixu(int *a, int *b, int *c);//声明排序函数 
void swap(int *a, int *b);//声明交换两个值的函数 

main() {//主函数入口 
	int a, b, c;//定义了三个变量 
	scanf("%d %d %d", &a, &b, &c);//读入三个数 
	paixu(&a, &b, &c);//排序 
	printf("%d %d %d", a, b, c);//输出结果 
	return 0;//主函数结束 
}

void paixu(int *a, int *b, int *c) {//排序函数定义 
	if (*a > *b) {//如果A>B 
		swap(a, b);//交换A,B的值 
	}

	if (*b > *c) {//如果B>C
		swap(b, c);//交换B,C的值
	}

	if (*a > *b) {//如果A>B 
		swap(a, b);//交换A,B的值
	}
}

void swap(int *a, int *b) {//定义交换数值的函数 
	int e = 0;//定义了一个中间变量 
	e = *a;//保存A的值 
	*a = *b;//将B的值赋给A； 
	*b = e;//将A的值赋给B； 
}
