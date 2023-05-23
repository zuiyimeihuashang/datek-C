#include <stdio.h>

int main()
{
	int n,i;
	char a[50]={'\0'};
	scanf("%d %s",&n,a);
	n%=26;
	for(i=0;a[i]!='\0';i++){
		if(((a[i]-96)+n)%26==0){
			a[i]='z';
		}else{
			a[i]=((a[i]-96)+n)%26+96;
		}
	}
	printf("%s",a);
	
	return 0;
}
