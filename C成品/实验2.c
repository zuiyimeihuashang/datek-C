#include <stdio.h>
#include <string.h>
#define zero 48

//void add(char* c,char *sum);//��������ӣ���������ں�һ������ 
//void chengfa(char a[100],char b[100]);//��������ˣ���������ں�һ������ 

int main()
{
	int n,i,j;
	long long int sum=0,a=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a*=i;		printf("%d�Ľ׳��ǣ�%lld\n",i,a);
		sum+=a;		printf("%d�Ľ׳˵ĺ���%lld\n",i,sum);
	}	
//	printf("%lld",sum);
	return 0;
}

