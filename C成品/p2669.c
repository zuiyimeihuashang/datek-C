#include <stdio.h>
#include <math.h>

int main()
{
	int n,i,j,sum=0,cnt=0;
	scanf("%d",&n);
	for(i=1;cnt<n;i++){
		cnt+=i;
		for(j=0;j<i;j++){
			sum+=i;
		}
		if(cnt>n){
			int N=cnt-n; 
			for(j=N;j>0;j--){
			sum=sum-i;
			}
			break;
		}		
	}
	printf("%d",sum);
	return 0;
} 
