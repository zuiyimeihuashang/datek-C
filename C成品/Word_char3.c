#include <stdio.h>
#include <string.h>
int word_str(int singer,char str1[100],char str2[100]);
void strab(int a,int b,char str2[100],char str3[100]);
int str_kpm(char str2[100],char str3[100]);
void str_a_str(int a,char str2[100],char str3[100]);
typedef struct{
	char a[100];
	int d,singer5;
}char_n;
//4 ILove 1 Luogu 2 5 5 3 3 guGugu 4 gu
int main()
{
	int singer=0,N,i,in=0;
	char str1[100],str2[100]={'\0'};
	scanf("%d %s",&N,str1);char_n strn[N];//printf ("\n");
	for(i=0;i<N;i++){
		scanf("%d",&singer);
		in=word_str(singer,str1,str2);
	//	printf("$$%s$$\n",str2);
		strn[i].singer5=singer;
		if(singer<4){
  			const char*p2=(const char*)str1;
			strcpy (strn[i].a,p2); 			
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
	char str3[100];int singer3=0;
	switch(singer)
	{//4 ILove 1 Luogu 2 5 5 3 3 guGugu 4 gu
		case 1:{
			scanf("%s",str2);
		/*	const char* p1=(const char*)str1;
			strcpy(str3,p1);*/
			strcat(str1,str2);
		//	printf("%s\n",str1);
			break;
		}
		case 2:{
		/**	const char* p1=(const char*)str1;
			strcpy(str3,p1);**/
			int a,b;scanf("%d %d",&a,&b);
		//	scanf("%s",str2);
			strab(a,b,str2,str1);
			const char* p1=(const char*)str2;
			strcpy(str1,p1);
		//	printf("%s\n",str1);			
			break;
		}
		case 3:{// 3 3 guGugu 4 gu		
		/**	const char* p1=(const char*)str1;
			strcpy(str3,p1);**/
			int a;
  			 scanf("%d",&a);
   			scanf("%s",str2);
			str_a_str(a,str2,str1);			
   const char* p1=(const char*)str2;
   strcpy(str1,p1);
		//	printf("%s\n",str1);	
			break;
		}
		case 4:{
		/**	const char* p1=(const char*)str1;
			strcpy(str3,p1);**/
			int a=0;scanf("%s",str2);
		//	printf("%s %s",str1,str2); 
			a=str_kpm(str2,str1);
			singer3=a;
		//	printf("%d\n",a);			
			break;
		}
		default:{
			break;
		}
	}
	return singer3;
}
void strab(int a,int b,char str2[100],char str1[100])
{
	int i;
	for(i=0;i<100;i++){
		str2[i]='\0';
	}
	for(i=0;i<b;a++,i++){ 
		str2[i]=str1[a];
	}
}
void str_a_str(int a,char str2[100],char str1[100])
{
	char e[100]={'\0'};
	int i, len=strlen(str2)+strlen(str1);
int len1=strlen(str2)+a;
//printf("$$%d$$\n",len1);
	for(i=0;i<len;i++){
		if(i>=a&&i<len1){
			e[i]=str2[i-a];
		}else if(i<a){
			e[i]=str1[i];
		}else{
            e[i]=str1[i-strlen(str2)];
  }
	}    
	strcpy(str2,e);
}
int str_kpm(char str2[100],char str1[100])
{
	int len2=strlen(str2),len1=strlen(str1)+strlen(str2),i,j,len3=strlen(str1);
	int next[len2],cnt=0,singer1=1,k;
	char qaq=str2[0];
	for(i=0;i<len3;i++){
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

