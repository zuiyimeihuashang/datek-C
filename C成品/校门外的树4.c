#include  <stdio.h>

main()//对于 100%的数据，保证1≤1≤10**4，1 ≤m ≤100, 0 ≤u ≤v ≤l.
{
	int l=0,m=0;
	scanf("%d %d",&l,&m);
	int tree[10002];
	int sum=0,k=0,a=0,i=0,j=0;
		for(i=0;i<l+1;i++){
			tree[i]=1;//printf("%d",tree[i]);调试用 ,有数为1； 
		}
		for(a=0;a<m&&m>=1&&m<=100;a++){
		scanf("%d %d",&i,&j); 
		for(;i<=j&&j<l&&i>=0;i++){//  0 ≤u ≤v ≤l.保证，俩重循环使去除树 
						tree[i] = 0;
			//printf("%d\n",tree[i]);调试用 
		}
		}
				
		for(k=0;k<l+1;k++){
			if(tree[k]){/*tree[i]=0错误，经常只用一个=。历遍数组有树（tree==1）加一*/
				sum = sum+1;
			}
		}
			
	//500 3 150 150 100 200 470 471  10 2 1 5 6 7
	printf("%d\n",sum); 
	return 0;
}    
