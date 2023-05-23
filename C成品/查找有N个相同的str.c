#include <stdio.h>
#include <string.h>
int strstr_n(char a[],char b[]);
int main()//boygirboyogirlyyygir
{
	char c[300]={'\0'};
	scanf("%s",c);
	int sum1=strstr_n(c,"boy"),sum2=strstr_n(c,"girl");
	printf("%d\n",sum1);
	printf("%d",sum2);
	return 0;
 } 
 int strstr_n(char a[],char b[])
 {
 	 int i,cnt=0,lena=strlen(a),lenb=strlen(b),singer=0;
 	 char *p=NULL;
 	 if((p=strstr(a,b))!=NULL){
 	 	cnt++;singer=1;p+=lenb;
	  } 
	if(singer){
	  	while(p&&p<=a+lena-lenb+1){
	  	 	if((p=strstr(p,b))!=NULL){
 	 			cnt++;p+=3;
	  		} 
		}
	}
	return cnt;
 }
