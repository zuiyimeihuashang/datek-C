#include <stdio.h>//ͷ�ļ� 

int main()//��������� 
{
	int n,m,i,sum=0,sum1=0,sum2=0;//�������������� 
	scanf("%d %d",&n,&m);//����M N 
	int a[n];//���� ��һ������ 
	for(i=0;i<n;i++){//�������� 
		scanf("%d",&a[i]);//������ֵ 
		if(i<m){//�����ǰM���� 
			sum+=a[i];//��ǰM�����ĺ� 
			if(i==m-1)sum1=sum;//��ǰM�����ĺͱ�����SUM1�� 
		}
		if(i>=m){//�������M��֮�� 
			sum2=sum1+a[i]-a[i-m];//����sum2��ֵ 
			sum=sum2<sum?sum2:sum;//�Ƚ��ҵ���Сֵ 
			sum1=sum2;//���µ�sumֵ�������� 
		}
	}
	printf("%d",sum);//������ 
	return 0;//���������� 
}
