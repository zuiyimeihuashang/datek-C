#include <stdio.h>
void swap(long int *a,long int *b);//交换AB 
long int gcd(long int gcd_a,long int gcd_b);//求最大公约数 

int main()
{
	long int a,b,c;
	scanf("%ld %ld %ld",&a,&b,&c);
	if(a>b)swap(&a,&b);
	if(a>c)swap(&a,&b);
	if(b>c)swap(&b,&c);
	long int igcd=gcd(c,a);
	a/=igcd;
	c/=igcd;
	printf("%d/%d",a,c);	
	return 0;
}
void swap(long int *a,long int *b)
{
	long int e = 0;
	e = *a;
	*a = *b;
	*b = e;
}
long int gcd(long int gcd_a,long int gcd_b)
{
	long int gcd_c=0;
	while(gcd_b!=0){
		gcd_c=gcd_b;
		gcd_b=gcd_a%gcd_b;
		gcd_a=gcd_c;
	}
	return gcd_a;
}
