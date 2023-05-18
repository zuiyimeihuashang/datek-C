#include  <stdio.h>

main()//对于 100%的数据，保证1≤1≤10**4，1 ≤m ≤100, 0 ≤u ≤v ≤l.
{	int tree[10001]={0};
	int i,j,k,l,m,end,sum=0;
	scanf("%d %d",&l,&m);
//	int number[m][2]; 
/**/		for(i=0;i<=l;i++){
			tree[i]=1;//printf("%d",tree[i]);
		}
		for(i=0;i<m&&m>=1&&m<=100;i++){
			scanf("%d %d",&j,&k);
			for(;j<=k;j++){
				tree[j]=0;//printf("%d\n",tree[j]);	
			}
		}


		for(k=0;k<l+1;k++){
			if(tree[k]==1){/*tree[i]=0错误，经常只用一个=。历遍数组有树（tree==1）加一*/
				sum = sum+1;
			}
		}
			
	//500 3 150 300 100 200 470 471  9 2 1 5 6 7
	printf("%d\n",sum); 
	return 0;
}    
