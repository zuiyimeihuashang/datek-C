#include <stdio.h>
#include <string.h>

int main()
{
	int n,i,j,cntv=0,cntk=0,cnt=0,singer=0;
	scanf("%d",&n);
		char a,b,c,str[n+3];
		scanf("%s",str);a=str[0];
	if(a==86){
		cntv++;
	}else{
		cntk++;
	}
	for(i=1;i<n;i++){
		b=str[i];
		if(i==1&&a==75&&b ==75)singer=1;//用a==75不用a=='k',因为后者会出现奇怪的错误，留待以后解决 
		if(i==n-1&&a==86&&b ==86)singer=1;//上述错误是因为，题中是大写而自己用的是小写 
		if(b==86){
			cntv++;
		}else{
			cntk++;
		}
	/*	if(a==86)printf("hiv\n");
		printf("$%d$\n",a);
		if(b==75)printf("hik\n");*/
		if(a==86&&b==75){
			cnt++;
		}
		a=b;
	}//K VK VK KVVVVV VK KK VK KKKVVV VK VK K VK V VK 
	if(strstr(str,"VVV")!=NULL)singer=1;
	if(strstr(str,"KKK")!=NULL)singer=1;
	if(singer==1)cnt++;
	printf("%d",cnt);
	return 0;
}
