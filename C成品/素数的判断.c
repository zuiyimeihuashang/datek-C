#include <stdio.h>
#include <math.h>

main()
{
	int a,i=0,cnt=1;
	printf("请输入一个整数：");
	scanf("%d",&a);
	double b=sqrt(a*1.0);
	if(a==3||a==2){
		cnt=1;}
	 else if(a%6!=1&&a%6!=5){
			cnt=0;
	}else if(a>0){
		for(i=0;i<=b;i++){
				if(a%i==0){
				cnt=0;
				}			
		}
	}
	printf("%d",cnt);
	return 0;
}

