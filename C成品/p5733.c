#include <stdio.h>

int main()
{
	char a[100]={'\0'};
	int i;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]<='z'&&a[i]>='a'){
			a[i]=a[i]-32;
		}
	}
	printf("%s",a);
	return 0;	
}

