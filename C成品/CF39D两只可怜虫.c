#include <stdio.h>//����ͷ 

main()//������ 
{
	int a[3]={0},b[3]={0},i=0,j=0,singer=0;//��������������װ���꣬singer�����ź� 
	for(i=0;i<6;i++){//�������� 
		if(i<3){//��һ������ 
			scanf("%d",&a[i]);//����A����	
		}else {
			scanf("%d",&b[i-3]);//����ڶ������� 
			if(b[i-3]==1){//���������1 
				b[i-3]=0; //��Ϊ0 
			}else if(b[i-3]==0){//��֮ 
				b[i-3]=1; //��Ϊ1 
			}
		}	
	}
	for(i=0;i<3;i++){//�������� 
		if(a[i]!=b[i]){//��������в�һ����ͬ 
			singer=1;break;//��singer��Ϊ1����ѭ�� 
		}
	}
	if(singer){//�ж�singer��ֵ 
		printf("YES");//��0���YES 
	}else{
		printf("NO"); //Ϊ0���NO 
	}
	return 0;//���������� 
}
