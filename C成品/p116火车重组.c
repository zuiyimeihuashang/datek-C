#include <stdio.h>

void swap(int*a,int*b);
main() // 4 4 3 2 1
{
	int n,i,j;
	scanf("%d",&n);
	int train[n],cnt=0;
	for(i=0;i<n;i++){
		scanf("%d",&train[i]);
			//printf("%d",train[i]);
	}	
	for(i=0;i<n;){
		for(j=0;j+1<n;j++){
			if(train[j]>train[j+1]){
				swap(&train[j],&train[j+1]);
				cnt++;
			}
		}
		n--;
	}
	printf("%d",cnt);
	return 0;
}
void swap(int*a,int*b)
{
	int c=0;
	c=*a;
	*a=*b;
	*b=c;
}
