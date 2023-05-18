#include <stdio.h>
#include "myhead.h"
#include <string.h>

int main()
{
	char a[100] = { 0 }, b[100] = { 0 };
	scanf("%s %s", a[100], b[100]);
	strcpy(a, add(a, b));
	printf("%s", a);
	return 0;
}