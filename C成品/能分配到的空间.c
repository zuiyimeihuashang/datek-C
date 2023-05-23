#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	void *p;
	int cnt =0;
	while((p=malloc(100*1024*1024))){
		cnt++;
	}
	printf ("分配%d00MB了的空间\n",cnt);
	return 0;
}

