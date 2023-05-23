#include <stdio.h>
#include <string.h>
int word_str(int singer,char str1[100],char str2[100]);
void strab(int a,int b,char str1[100]);
int str_kpm(char str1[100],char str2[100]);
void str_a_str(int a,char str1[100],char str2[100]);
typedef struct{
	char a[100];
	int d,singer5;
}char_n;
//4 ILove 1 Luogu 2 5 5 3 3 guGugu 4 gu
int main()
{
	int singer=0,N,i,in=0,j;
	char str1[100],str2[100];
	scanf("%d %s",&N,str1);
	char_n strn[N];
	for(i=0;i<N;i++){
		scanf("%d",&singer);
		in=word_str(singer,str1,str2);//printf("$$%s$$\n",str2);
		strn[i].singer5=singer;
		if(singer<4){
			//const char* pstrna=(const char*)str1;
			//strcpy(strn[i].a,pstrna);
			for(j=0;j<100;j++){
				strn[i].a[j]=str1[j];	
			}
		}else{
			strn[i].d=in;
		}
	}
	for(i=0;i<N;i++){
		if(strn[i].singer5<4){
  			printf("%s\n",strn[i].a);			
		}else{
			printf("%d\n",strn[i].d);	
		}
	}
	return 0;
 } 
int word_str(int singer,char str1[100],char str2[100])
{
	int singer3=0;
	switch(singer)
	{
		case 1:{
			scanf("%s",str2);
			strcat(str1,str2);
			break;
		}
		case 2:{
			int a,b;scanf("%d %d",&a,&b);
			strab(a,b,str1);			
			break;
		}
		case 3:{
			int a;
  			 scanf("%d",&a);
   			scanf("%s",str2);
			str_a_str(a,str1,str2);			
			break;
		}
		case 4:{
			int a=0;scanf("%s",str2);
			a=str_kpm(str1,str2);
			singer3=a;		
			break;
		}
		default:{
			break;
		}
	}
	return singer3;
}
void strab(int a,int b,char str1[100])
{
	int i;
	char strab1[100]={'\0'};
	for(i=0;i<b;a++,i++){ 
		strab1[i]=str1[a];
	}
	for(i=0;i<100;i++){
		str1[i]=strab1[i];
	}
}
void str_a_str(int a,char str1[100],char str2[100])
{
	char e[100]={'\0'};
	int i, len=strlen(str2)+strlen(str1);
	int len1=strlen(str2)+a;

	for(i=0;i<len;i++){
		if(i>=a&&i<len1){
			e[i]=str2[i-a];
		}else if(i<a){
			e[i]=str1[i];
		}else{
            e[i]=str1[i-strlen(str2)];
  		}
	}    
	for(i=0;i<100;i++){
		str1[i]=e[i];
	}
}
int str_kpm(char str1[100],char str2[100])
{
	int len2=strlen(str2),i,j,len1=strlen(str1);
	int next[len2],cnt=0,singer1=1,k;
	char qaq=str2[0];
	for(i=0;i<len1;i++){
		if(str1[i]==qaq){
			next[cnt]=i;cnt++;
		}
	}
	int cnt1=cnt;
	for(i=0;i<cnt1;i++){
		for(j=next[i],cnt=0;cnt<len2;cnt++,j++){
			if(str1[j]!=str2[cnt]){
				singer1=0;break;
			}
		}
		if(singer1==1){
			j=next[i];cnt=100;break;
		}
	}
	if(cnt!=100){
		j=-1;
	}
	return j;
}

