#include <stdio.h>
#include <math.h>
 int prime(int *p);

int main()
{
	int n,i,a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(prime(&a)){
			printf("%d ",a);
		}
	}
	return 0;
 } 
 int prime(int *p)
{
	int i=0,cnt=1;
	double b=sqrt(*p);
	if(*p==3||*p==2){
		cnt=1;}
	else if(*p%6!=1&&*p%6!=5){
			cnt=0;
	}else if(*p>0){
		for(i=2;i<=b;i++){
			if(*p%i==0){
				cnt=0;
			}
		}
	}
	if(*p==1)cnt=0;
	return cnt;
}
