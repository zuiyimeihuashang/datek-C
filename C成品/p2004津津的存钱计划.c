#include <stdio.h>

main()
{
	int cost[12]={0},i=0,money=0,sing,mather=0;
	for(i=0;i<12;i++){
	scanf("%d",&cost[i]);
	}
	for(i=0;i<12;i++){
		money+=300;
		if(money-cost[i]<0){
			sing=-1*i-1;
		}else{
			mather+=(money-cost[i])/100;
			money=(money-cost[i])%100;
		}	
	}
	if(sing<0){
		printf("%d",sing);
	}else {
		printf("%d",mather*120+money);
	}
	return 0;
}
