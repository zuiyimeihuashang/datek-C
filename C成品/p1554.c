#include <stdio.h>

int main() 
{
	int M,N,i,cnt[10]={0};
	scanf("%d %d",&M,&N);
	for(i=M;i<=N;i++){
		int t;
		t=i;
		while(t){
			int t1=0;
			t1=t%10;
			cnt[t1]++;
			t/=10;
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",cnt[i]);
	}
	return 0;
}
