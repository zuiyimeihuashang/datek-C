#include <stdio.h> 

main()
{
	int k,i=0,cnt=0;
	if(k>0||k<100)scanf("%d",&k);
	for(i=10000;i<=30000;i++){
	if(	(i/100)%k==0&&
		((i/10)%1000)%k==0&&
		(i%1000)%k==0){
				printf("%d\n",i);
				cnt++;	
		}
	}
	if(cnt==0)printf("No");
	return 0;
}
