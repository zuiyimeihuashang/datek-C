#include <stdio.h>//ͷ�ļ� 
#include <math.h>//ͷ�ļ�
#include <malloc.h>//ͷ�ļ�
#define SINGER -1//��SINGERΪ-1 

main()//��������� 
{	int n,i,j,c;//�������ĸ����� 
	scanf("%d",&n);//����Nֵ 
	double a[n];// ������һ������ 
	int* linght=(int*)malloc(2000000*sizeof(int));//������һ���㹻��Ŀռ䱣���״̬ 
	for(i=0;i<2000000;i++){//�������� 
		linght[i]=-1;//��ʼ������-1����ص� 
	}
	int b[n];//����һ������ 
	for(i=0;i<n;i++){//�������� 
		scanf("%lf",&a[i]);//���� 
		scanf("%d",&b[i]);//���� 
	}
	for(i=0;i<n;i++){//�������� 
		for(j=1;j<=b[i];j++){//��������      
			c=(int)floor(j*1.0*a[i]);//�ҵ�������ĵƵı��     
		linght[c]=linght[c]*SINGER;//��һ�ο��� 
		}
	}
	for(i=0;i<2000000;i++){//�������� 
		if(linght[i]==1){//����ƿ� 
			printf("%d ",i);break;//����Ƶı�Ų�����ѭ�� 
		}
	}
	return 0;//���������� 
}
