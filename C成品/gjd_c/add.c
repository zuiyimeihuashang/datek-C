#include <stdio.h>
#include <string.h>
#define zero 48

char* add(char* a, char* b)//a[n]较短，高精度计算A与B的和 
{
	int len = strlen(a), i;
	for (i = 0; i < len; i++) {
		a[i] = (a[i] + b[i] - 2 * zero) % 10 + zero;
		a[i + 1] += (a[i] + b[i] - 2 * zero) / 10;
	}
	if (a[len - 1] > 49) {
		a[len] = a[len - 1] / 10;
		a[len - 1] %= 10;
	}
	return a;
}