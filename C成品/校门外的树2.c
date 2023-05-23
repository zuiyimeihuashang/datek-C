#include  <stdio.h>

main()
{
	int l=0,m=0,sum=0,cnt=0;
	scanf("%d %d",&l,&m);
	if(l<=10000&&m>=1&&m<=100&&l>=0){
		int tree[l+1];
		int i=0,j=0;
		for(i=0;i<m;i++){
			tree[i]=0;//printf("%d",tree[i]);
		}
		for(cnt=0;cnt<m;cnt++){
			scanf("%d %d",&i,&j);
		while(i<=j){
			tree[i] = 1;
			i++;//printf("%d\n",tree[i]);
		}
		}		
		for(cnt=0;cnt<l+1;cnt++){
			if(tree[cnt] == 0){/*tree[i]=0´íÎó*/
				sum = sum+1;
			}
		}
			
	}//500 3 150 300 100 200 470 471  10 2 1 5 6 7
	printf("%d\n",sum); 
	return 0;
} 
