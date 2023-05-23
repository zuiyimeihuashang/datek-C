#include <stdio.h>

main()//1<=l<=10**4 m[1,100] 0<=u<=v<=l
{
	int l = 0,m = 0,que=0;			
	scanf("%d %d",&l,&m);

	int i,j,sum=0,ent,cnt;
	if(l<=10000&&m>=1&&m<=100&&l>=0){
				ent=l+1;
	}else{	que=1;	}
			int tree[m][2];
			for(i=0;i<m;i++){
				for(j=0;j<2;j++){
					scanf("%d",&tree[i][j]);
								}
							} 

		while(que=0){
				for(cnt=0;cnt<m;cnt++){
		sum=tree[cnt][1]-tree[cnt][0]+1+sum;		
	}
	ent=ent-sum;
	printf("%d",ent);
		}	/**/	
	return 0;
}
