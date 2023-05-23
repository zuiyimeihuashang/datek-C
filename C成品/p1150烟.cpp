#include <stdio.h>

main()
{	
	int n,k,i=0;
	scanf("%d %d",&n,&k);
	if(n<k){
		printf("%d",n);
	}
	while(n>k){
		i+=n/k;
		n=n%k+n/k;
	}
	return 0;
}
