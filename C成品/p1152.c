#include <stdio.h>
#include <math.h>

main()
{	int n,i,j=0,cnt=0,BOOL=1;
	scanf("%d",&n);
	int number[n],a[n-1];
	for(i=0;i<n;i++){
		scanf("%d",&number[i]);
	}
	for(i=0;i<n-1;i++){
		a[i]=abs(number[i+1]-number[i]);
	}
	for(i=1;i<n;i++){
		for(j=0;j<n-1;j++){
			if(a[j]==i){
				cnt=1;
			}
			if(j==n-2&&cnt!=1){
				BOOL=0;
			}
		}

	}
	if(BOOL==1){
		printf("Jolly");		
	}else{
		printf("Not jolly");
	}	
	return 0;
}
