#include <stdio.h>//函数头 
void  paixu(int *a, int *b, int *c);//声明排序函数 
void swap(int *a, int *b);//声明交换两个值的函数 

main() {//主函数入口 
	
	int a, b, c, singer1 = 0;//定义了四个变量 
	scanf("%d %d %d", &a, &b, &c);//读入三个边长 
	max(&a, &b, &c);//排序 
	singer1 = a * a + b * b - c * c;//计算cos的值 

	if (a+b<=c) {//如果不能构成三角形 
		printf("Not triangle");//输出 
	} else {
		if (singer1 > 0) {//如果是顿角 
			printf("Acute triangle\n");//输出
		} else if (singer1 < 0) {//如果是锐角
			printf("Obtuse triangle\n");//输出 
		} else {
			printf("Right triangle\n");//输出 
		}
		if ((a == b || b == c || a == c) && (a != b || a != c || b != c)) {//如果是等腰三角形 
			printf("Isosceles triangle\n");//输出 
		}
		if (a == b && a == c) {//如果是等边三角形 
			printf("Isosceles triangle\n");//输出 
			printf("Equilateral triangle\n");//输出 
		}

	}

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
