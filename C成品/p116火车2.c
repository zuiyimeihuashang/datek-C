#include <stdio.h>

main() // 4 4 3 2 1
{	int n,i=0,j=0,cnt=0;
	scanf("%d",&n);
	int train[n];
	for(i=0;i<n;i++){
	scanf("%d",&train[i]);	
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if( train[i]>train[j]){
				cnt++;
			}
		}
	}
	printf("%d",cnt);
	return 0;
}
