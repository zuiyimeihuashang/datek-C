#include <stdio.h>

int split(int a,int b[]);
main() 
{	
	int a;int c[10]={0};
	int singer=1,i,cnt,sum=0; 
	scanf("%d",&a);
	cnt=split(a,c);//printf("%d\n",cnt);
	for(i=0;i<cnt;i++){
		sum=sum*10+c[i];
	}printf("%d %d\n",a,sum);
	if(sum!=a)singer=0;
	printf("%d\n",singer);
	return 0;
}
int split(int a,int b[])//�ֽ�һ���������������У���������λ���� 
{
	int i,cnt1=0,sum=0;
	for(i=0;a!=0;i++){
		b[i]=a%10;
		a/=10;
		cnt1++;
	}
	return cnt1;
}
