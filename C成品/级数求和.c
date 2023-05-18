#include <stdio.h>

main()
{
	int k = 0;
	int n = 1;
	double sum =0.0;
	scanf("%d",&k);
	if(k>=1&&k<=15){ if(k!=1){
			for(n=1;sum<=k;n++){
			sum=sum+1.0/n;
		}
		n=n-1;
	}else n=1;
	
		}
	printf("%d",n);
	return 0;
 } 
