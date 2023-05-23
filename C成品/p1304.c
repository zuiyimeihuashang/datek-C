#include <stdio.h>
#include <math.h>
int prime(int p);
void gdbh(int x);

int main() {
	int n, i, j;
	scanf("%d", &n);

	for (i = 4; i <= n; i = i + 2) {
		gdbh(i);
	}

	return 0;
}

void gdbh(int x) {
	int j, in;

	for (j = 2; j < x; j++) {
		in = x - j;

		if (prime(j) == 1 && prime(in) == 1) {
			printf("%d=%d+%d\n", x, j, in);
			break;
		}
	}
}

int prime(int p) {//定义判断质数的函数
	int i = 0, singer = 1;//定义了两个变量
	double b = sqrt(p);//定义了一个double变量

	if (p == 2 || p == 3) { //如果是2,3则是质数
		singer = 1;//singer为1
	} else if (p % 6 != 1 && p % 6 != 5) {//如果不在6X的附近
		singer = 0;//一定不是质数
	} else if (p > 0) {//保证大于0
		for (i = 2; i <= b; i++) {//从2开始遍历
			if (p % i == 0) {//如果能整除
				singer = 0;//singer为1
			}
		}
	}

	if (p == 1)
		singer = 0;

	return singer;//返回singer的值
}