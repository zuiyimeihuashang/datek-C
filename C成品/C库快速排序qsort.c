#include <stdio.h>
#include <stdlib.h> 
int cmp(const void*a,const void*b);

main()
{	int a[]={0,0,7,5,4,3,8,1,2,6},i=0;
	qsort(a,10,sizeof(a[0]),cmp);
	for(i=0;i<10;i++){
		printf("%d",a[i]);
	}
	return 0;
}
int cmp(const void*pa,const void*pb)
{
	return *(int*)pa-*(int*)pb;
	//return *(int*)pa-*(int*)pb;½µÐòÅÅÐò 
}
