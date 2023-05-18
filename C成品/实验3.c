#include <stdio.h>
#include <string.h>
#define zero 48
int main()
{
	char a[100]={'\0'},b[100]={'0','0'};
	int c=0,f=10;
	c=f/10;
	a[0]=(char)(c+zero);
	strcat(a,b);
	printf("%s",a);
	return 0;
}
