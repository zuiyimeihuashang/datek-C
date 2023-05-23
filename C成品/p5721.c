#include <stdio.h>

int main()
{
	int n=0,i,j;
	scanf("%d",&n);
	for(i=1;n>0;n--){
		for(j=0;j<n;j++){
			if(i<10){
				printf("0");
			}
			printf("%d",i);
			i++;
		}
		printf("\n");
	}
	return 0;
}

