#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>


int main() {
	int n, i, j = 0, sum = 0, k = 0, d, e, f, d1, f1, e1, h = -1;
	char b[100]={'\0'}, l[100]={'\0'}, a='\0';
	scanf("%d", &n);getchar();
	for (i = 0; i < n; i++) 
	{
		scanf("%s %d %d %d",b,&d,&e,&f);
		if(i<n-1)getchar();
		sum = d + e + f;
		if (sum > h) {
			d1 = d;
			e1 = e;
			f1 = f;
			h = sum;k=0;
			strcpy(l,b);
		}
		memset(b,'\0',sizeof(b));//含数用于初始化字符数组 
	}
	printf("%s %d %d %d",l,d1,e1,f1);
	return 0;
}
