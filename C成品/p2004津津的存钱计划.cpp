#include <stdio.h>

main()
{
	int a[12]={0},sing=0,i=0,x0=0,sum;
	for(i=0,x0=0;i<12;i++){
		x0=a[i]-x0;
		if(300-x0<0){
			sing=300-x0;
			break;//290 230 280 200 300 170 340 50  90  80  200 60 
		}else{
			sum+=(300-x0)-(300-x0)%100;
		}
		x0=300-x0;
	}
	if(sing<0){
		printf("%d",sing);
	}else{
		printf("%d",sum*12/10);
		
	}
	return 0;
}
