#include <stdio.h>
#include <string.h>

int main()
{
	char a[12]={'\0'},b[12]={'\0'};
	int i,cnt=0,j=0,len=0;
	scanf("%s",a);
	len=strlen(a)-1;
	for(i=len;i>=0;i--){
		if(a[0]=='-'){
			b[0]='-';
			if(cnt==0&&a[i]!='0'&&a[i]!='\0'){
				cnt++;j=1;
			}
			if(cnt!=0&&i!=0){
				b[j]=a[i];j++;
			}		
		}else{
			if(cnt==0&&a[i]!='0'&&a[i]!='\0'){
				cnt++;j=0;
			}
			if(cnt!=0){
				b[j]=a[i];j++;	
			}
			if(cnt==0&&i==0&&a[i]=='0'){
				b[i]='0';
			}
		}
	}
	printf("%s",b);
	return 0;
}
