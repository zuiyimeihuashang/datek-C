#include <stdio.h>
#include <math.h>

int main()
{
	int n,k1,m,cnt;
	scanf("%d %d %d",&n,&k1,&m);
	int i,j,k,a[n][n],x,y;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=0;
		}
	}
	for(i=0;i<m+k1;i++){
		scanf("%d %d",&x,&y);
		x=x-3;y=y-3;
		if(i<k1){
			for(j=0;j<5;j++){
				for(k=0;k<5;k++){
					if((k==0||k==4||j==0||j==4)&&(abs(k-j)!=2))continue;
					if(j+x>=0&&j+x<n&&k+y<n&&k+y>=0)a[j+x][k+y]=1;
				}
			}
		}else{
			for(j=0;j<5;j++){
				for(k=0;k<5;k++){
					if(j+x>=0&&j+x<n&&k+y<n&&k+y>=0)a[j+x][k+y]=1;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==0)cnt++;
		}
	}
	printf("%d",cnt);
	return 0;	
}
