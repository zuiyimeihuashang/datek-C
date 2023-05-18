#include <stdio.h>

int main()
{
	char e[300]={'\0'},a='0',b='0',c='0';
	scanf("%s",e);
	int i=0;
	for(i=0;i<260&&e[i]!='\0';i=i+5){//a:=b;b:=a;c:=3;c:=c;b:=b;a:=a;
		if(e[i]=='a'){
			if(e[i+3]=='b'||e[i+3]=='c'){
				if(e[i+3]=='b'){
					a=b;
				}else{
					a=c;
				}
			}else if(e[i+3]!='a'){
				a=e[i+3];				
			}
		}else if(e[i]=='b'){
			if(e[i+3]=='a'||e[i+3]=='c'){
				if(e[i+3]=='a'){
					b=a;
				}else{
					b=c;
				}
			}else if(e[i+3]!='b') {
				b=e[i+3];
			}
		}else if(e[i]=='c'){
			if(e[i+3]=='a'||e[i+3]=='b'){
				if(e[i+3]=='a'){
					c=a;
				}else{
					c=b;
				}
			}else if(e[i+3]!='c'){
				c=e[i+3];
			}
		}
	}
	int j=a-48,k=b-48,l=c-48;
	printf("%d %d %d",j,k,l);
	return 0;
 } 
