#include <stdio.h>

main()
{	
	int n,k,i=0,a=0;
	scanf("%d %d",&n,&k);
	a=n;
	while(n>=k&&n>1){
		i+=n/k;
		n=n%k+n/k;
	}
	a+=i;
	if(k>1){
		printf("%d",a);	
	}else return EOF;	
	return 0;
}
