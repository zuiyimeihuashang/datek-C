#include <stdio.h>
int main()
{
	const int k1=30;//k1��λ����
	const int k2=60;//K2�Ӱ๤��
	const int k3=40;//����ʱ�� 
	
	double money=0.0;
	int hour;
	
	printf("�����빤��ʱ�䣺");
	scanf("%d",&hour);
	
	if(hour>k3){
		money=k3*k1+(hour-k3)*k2;
	}
	else {	
		money=hour*k1;
	}
	
	printf("��������");	
   printf("%f\n",money);
   return 0;
}
