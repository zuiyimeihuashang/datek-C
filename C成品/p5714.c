#include <stdio.h>

//double youx_sz(double yx_a,int* yx_n);
int main()
{
	double m,h,k=0.0,l=1.0;
	int n=6,j;
	scanf("%lf %lf",&m,&h);
	k=m/(h*h);
	if(k<18.5){
		printf("Underweight");
	}else if(k>=24.0){
		printf("%6g\n",k );
		printf("Overweight");
	}else{
		printf("Normal");
	}
	return 0;
}
/*double youx_sz(double yx_a,int* yx_n)//数字A，保存的数组B，位数N 
{
	int i=0,N=1,inn=0,cnt1=0;
	double in=yx_a;
	while(in>1){
		cnt1++;
		in/=10;
	}
	for(i=0;i<*yx_n-cnt1;i++){
		yx_a*=10;
	}
	inn=(int)(yx_a+0.5);
	yx_a=(double)inn;
	for(i=cnt1;i<*yx_n;i++){
		yx_a*=0.1;	
	}
	*yx_n=*yx_n-cnt1;
	return yx_a;
}*/
