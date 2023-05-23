#include <stdio.h>

main()
{
	int n,m,i,j=0,k=0,q;
	scanf("%d %d",&n,&m);
	int village[n],road[m][m];
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			road[i][j]=0;
		}
	}
	for(i=0;i<n;i++){
		scanf("%d",&village[i]);
	}
	for(i=0,j=0,k=0;i<m;i++){
		scanf("%d %d ",&j,&k);
		scanf("%d",&road[j][k]);
	}
	scanf("%d",&q);
	int ask[q][q];
	for(i=0;i<q;i++){
		for(j=0;j<q;j++){
			ask[i][j]=0;
		}
	}
	for(i=0,j=0,k=0;i<m;i++){
		scanf("%d %d ",&j,&k);
		scanf("%d",&ask[j][k]);
	}		
	return 0;
}
