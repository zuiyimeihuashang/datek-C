#include <stdio.h>

void sawp(int*,int*); 
main()
{	int *p,q;
	int A,B;
	printf ("ÇëÊäÈëA,BµÄÖµ");
	scanf("%d,%d",A,B);
	 *p=&A;
	 *q=&B;
	sawp(int *p,int *q);
	return 0 ;
 } 
 
 void sawp(int *p,int *q)
 {	int c=0;
 	c = *p;
 	*q = *p;
 	*p = c;
 }
