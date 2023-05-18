#include <stdio.h>

int main()
{
	int n,singer=1,i,j,in,N=0;
	scanf("%d",&n);N=n*n;
	char a[N];
	for(i=0;i<N;){
		scanf("%d",&in);
		for(j=0;j<in;j++){
			if(singer==1){
				a[i]='0';
			}else{
				a[i]='1';
			}
			i++;
		}
		singer*=-1;
	}
	for(i=0;i<N;i++){
		printf("%c",a[i]);
		if((i+1)%n==0)printf("\n");
	}
	return 0;
}
