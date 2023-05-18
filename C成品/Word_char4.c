#include <stdio.h>
#include <string.h>
int word_str(int singer,char str1[100],char str2[100]);
void strab(int a,int b,char str1[100]);
void str_a_str(int a,char str1[100],char str2[100]);
typedef struct{
	char a[100];
	int d,singer5;
}char_n;
//4 ILove 1 Luogu 2 5 5 3 3 guGugu 4 gu
int main()
{
	int singer=0,N,i,in=0;
	char str1[100],str2[100]={'\0'};
	scanf("%d %s",&N,str1);char_n strn[N];
	for(i=0;i<N;i++){
		scanf("%d",&singer);
		in=word_str(singer,str1,str2);
		strn[i].singer5=singer;
		if(singer<4){
  		    char * p2=str1;
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
	char str3[100];int singer3=-1;
	switch(singer)
	{
		case 1:{
			scanf("%s",str2);
			strcat(str1,str2);
			break;
		}
		case 2:{
			int a,b;
			scanf("%d %d",&a,&b);
			strab(a,b,str1);			
			break;
		}
		case 3:{
			int a;
  			scanf("%d %s",&a,str2);
			str_a_str(a,str1,str2);				
			break;
		}
		case 4:{
			char* strstra;
			scanf("%s",str2); 
			strstra=strstr(str1,str2);
			if(strstra!=NULL)singer3=strstra-str1;			
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
	char ab_str[100]={'\0'};
	for(i=0;i<b;i++,a++){ 
		ab_str[i]=str1[a];
	}
	strcpy(str1,ab_str);
}
void str_a_str(int a,char str1[100],char str2[100])
{
	char a_1[100]={'\0'},a_2[100]={'\0'};//int strsaf;scanf("%d",&strsaf);
	int i, a_len=strlen(str1);
	for(i=0;i<a_len;i++){
		if(i<a){
			a_1[i]=str1[i];
		}else{
			a_2[i-a]=str1[i];
		}
    }
	strcat(a_1,str2);
	strcat(a_1,a_2);   
	strcpy(str1,a_1);
}


