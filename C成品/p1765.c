#include <stdio.h>
#include <string.h>

int main()
{
	char a[500]={'\0'};
	int cnt=0,i=0,len,singer=1;
	a[i]=getchar();
//	while(a[i]==' ')a[i]=getchar();
	while(a[i]!='\n'&&a[i]!='\r'){
		a[++i]=getchar();
	}
	len=strlen(a);
	for(i=0;i<len-1;i++){//i see dead people
		if(a[i]==' '){
			cnt++;
		}else{
			if(a[i]=='s'||a[i]=='z'){
				cnt+=4;
			}else if(a[i]>'s'){
				a[i]=a[i]-1;
				if(a[i]%3==0){
					cnt+=3;
				}else{
					cnt+=a[i]%3;
				}
			}else{
				if(a[i]%3==0){
					cnt+=3;
				}else{
					cnt+=a[i]%3;
				}
			}
		}	
	}
//	if(len==2)cnt++;
	printf("%d",cnt);
	return 0;
	
 } 
