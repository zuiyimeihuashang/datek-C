#include <stdio.h>
#include <string.h>
#define zero 48
const char* add(const char* a,const char *b,int len);//���ļ��������ɸı��ļ���ʽ 

int main()//1111222233334444555511112222333344445555 5555444433332222111155554444333322221111 
{		  //55554444333322221111 
	char a[100]={'\0'},c[100]={'\0'},b[100]={'\0'};
	scanf("%s %s",a,b);//printf("%s\n",a);printf("%s\n",b);
	int len=strlen(a),i;
	const char*p=add((const char*)a,(const char*)b,len);//ֻ���޶����ں����в����ı䣬�ں�����Ϊ���ɱ��� 
	strcpy(c,p);//strcop(char*a,const*v);//�����е��׵�ַ��const char *; 
	printf("%s ",c);//a[2]='9';	printf("%s ",a);	printf("%s",b);//
	return 0;
}
const char* add(const char* a,const char *b,int len)//a[n]�϶̣��߾��ȼ���A��B�ĺ� 
{//printf("\n");//const ���Ա�֤�����е�ֵ�����ı䣻 
	int i;char d[100];
	strcpy(d,b);
	for(i=0;i<len;i++){
		d[i]=(a[i]+b[i]-2*zero)%10+zero;
		d[i+1]+=(a[i]+b[i]-2*zero)/10;//printf("%c",d[i]);
	}
	if(a[len-1]>57){
		d[len]=(a[len-1]-48)/10+48;
		d[len-1]=(a[len-1]-48)%10;
	}//printf("%s\n",a);
	//printf("\n");printf("%c\n",a[2]);
	const char* p=d;

	return p;
}
