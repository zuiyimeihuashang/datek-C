#include <stdio.h>//ͷ�ļ� 

main()//��������� 
{	long long int a,b,x,i;//��Ϊ���ݽϴ�����ʱ�����ƹ�ѡ����longlong 
	scanf("%lld %lld %lld",&a,&b,&x);//���������� 
	if(a%x==0){//�ж��ܷ����� 
		a=(a/x);//�ܵĴ��� 
	}else{
		a=(a/x)+1;//���ܵĴ��� 
	}
	b=(b/x);//���� 
	printf("%lld",b-a+1);//������ 
	return 0;//���������� 
}
