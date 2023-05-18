#include <stdio.h>

void max(double*a,double*b,double*c);
void swap(double *a,double*b);
int psjx(double a,double b,double c);
main()
{	
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);printf("\n");	printf("%lf %lf %lf",a,b,c);printf("\n");
	max(&a,&b,&c);
	printf("%d",psjx(a,b,c));
	return 0;
} 
int psjx(double a,double b,double c)
{	int singer=0;
	if(a+b>c){
		singer=1;
	}
	return singer;
}
void max(double*a,double*b,double*c)
{
	if(*a>*b){
		swap(a,b);
	}
	if(*b>*c){
		swap(b,c);
	}
	if(*a>*b){
		swap(a,b);
	}	
}
void swap(double *a,double*b)
{
	double e=0;
	e=*a;
	*a=*b;
	*b=e;
}
