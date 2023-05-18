#include <stdio.h>
#include <math.h>

int prime(int*p);
main()
{	int i=0,max=0,a=0,cnt=0,j=0;
	printf("请输入一个数字");
	scanf("%d/n",&a);
	int number[a];
	for(i=0;i<a;i++){
		number[i]=0;
		printf("%d",number[i]);
	}
	for(i=2,cnt=0;i<a;i++){
		if(prime(&i)==0){
			int*p=&number[i];
			*p=i;
			cnt++;
			printf("%d\n",number[cnt]);
		}
	}
	
	return 0;
 } 
int prime(int*p)
{
	int i=0,cnt=0;
	if(*p<2){
		cnt=1;}
	else{
		double b=sqrt(*p);
		for(i=2;i<=b;i++)
		{	if(*p%i==0)
			{
				cnt=1;
			}
		}
	}
	return cnt;
}
