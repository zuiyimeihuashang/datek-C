#include <stdio.h>// ͷ�ļ� 
#define pi 3.14//����ȫ�ֳ��� pi
#define water 20000//����ȫ�ֳ��� water 
main()//��������� 
{	int r=0,h=0;//����������int�ͱ��� 
	double t=0;//����һ��double���� 
	scanf("%d %d",&h,&r);//����ߺͰ뾶 
	t=water/(pi*r*r*h);//������Ҫ��Ͱ�� 
	if(0==t-(int)t){//������������Ͱ 
		printf("%.0f",t);//���Ͱ�� 
	}else{
		printf("%.0f",t+1);//���Ͱ����һͰ 
	}
	return 0;//���������� 
}
