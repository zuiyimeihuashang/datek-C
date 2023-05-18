#include <stdio.h>
#include <math.h>

int prime(int*a);
main()
{	int i=0;
	int a=30,cnt=0;
	int number[10]={number[0]=2};
	for(i=2,cnt=1;i<a;i++){
		int *p=&i;
		if(prime(*p)==1){
			number[cnt]=prime(*p);
			cnt++;
		};
	}
	for(i=0;i<10;i++){
		printf("%d\n",number[i]);
	}
	return 0;
}

int prime(int*p)
{
	int i=0,cnt=0;
	if(*p<=2){
		cnt=1;}
	else{
		double b=sqrt(*p);
		for(i=2;i<=b;i++)
		{	if(*p%i!=0)
			{
				cnt=1;
			}
		}
	}
	return cnt;
}
