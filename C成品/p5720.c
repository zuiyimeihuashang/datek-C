#include <stdio.h>

int main()
{
	int a,cnt;
	scanf("%d",&a);
	for(cnt=1;a!=1;cnt++){
		a/=2;
	}
	printf("%d",cnt);
	return 0;
}
