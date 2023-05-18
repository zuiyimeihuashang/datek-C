#include <stdio.h>
int yearpd(int year);

main()
{
	int x,y,cnt=0,kj,i;
	scanf("%d %d",&x,&y);
	kj=y-x+1;
	int e[kj];
	for(i=0;i<kj;i++){
		e[i]=0;
	}
	for(;x<=y;x++){
		if(yearpd(x)==1){
			e[cnt]=x;
			cnt++;
		}
	}
	printf("%d\n",cnt);
	for(i=0;i<cnt;i++){
		printf("%d ",e[i]);
	}
	return 0;
 }
 int yearpd(int year) 
 {
	int singer=0;
	if(year%4==0&&year%100!=0){ 
		singer=1;
	}else if(year%400==0){ 
		singer=1;
	}
	
	return singer;
 } 
