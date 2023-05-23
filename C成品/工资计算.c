#include <stdio.h>
int main()
{
	const int k1=30;//k1单位工资
	const int k2=60;//K2加班工资
	const int k3=40;//工作时间 
	
	double money=0.0;
	int hour;
	
	printf("请输入工作时间：");
	scanf("%d",&hour);
	
	if(hour>k3){
		money=k3*k1+(hour-k3)*k2;
	}
	else {	
		money=hour*k1;
	}
	
	printf("您工资是");	
   printf("%f\n",money);
   return 0;
}
