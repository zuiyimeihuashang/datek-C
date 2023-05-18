#include <stdio.h>
#include <string.h>


int main()
{
	char str0[201];
	scanf("%s",str0);getchar();
	int len=strlen(str0);
	char str1[len*200+1];
	strcpy(str1,str0);//printf("$$");printf("%s",str0);printf("$$\n");
	int i,j,k=1,num[201]={0},cnt=1;
	num[0]=len;
	for(i=0;i<len-1;i++){
		scanf("%s",str0);//fgets(str0,len+1,stdin);//printf("$$");printf("%s",str0);printf("$$\n");
		getchar();
		strcat(str1,str0);k++;
	}//printf("%s\n",str1);
	int cnt1=0,singer=1;k=len*len;
	for(i=0,j=1;i<k;j++){//0001000000100000011110001000000100000010001111111
		if(singer==1){
			while(str1[i]=='0'){
				cnt1++;i++;
			}
		}else{
			while(str1[i]=='1'){
				cnt1++;i++;
			}
		}	
		num[j]=cnt1;
		singer*=-1;
		cnt1=0;
	}
	for(i=0;i<j;i++){
		printf("%d ",num[i]);
	}
	return 0;
}

