#include <stdio.h>

main()
{	int l,r,cnt=0;
	scanf("%d %d",&l,&r);
	for(;l<=r;l++){
		int a;
		a=l;
		while(a){
			if(a%10==2){
				cnt++;
			}
			a/=10;
		}
	}
	printf("%d",cnt);
	return 0;
}
