#include <stdio.h>//ͷ�ļ� 

typedef struct{//���岢��������һ���ṹ����� 
	int a,b,c,sum;//�����ĸ����� 
}cj;
int main()//��������� 
{
	int i,n,cnt=0,j,singer=1;//�������ĸ����� 
	scanf("%d",&n);//����N��ֵ 
	cj student[n];//������һ���ṹ������ 
	for(i=0;i<n;i++){//�������� 
		scanf("%d %d %d",&student[i].a,&student[i].b,&student[i].c);//����ѧ����Ϣ 
		student[i].sum=student[i].a+student[i].b+student[i].c;//�����ܳɼ� 
	}
	for(i=0;i<n-1;i++){//�������� 
		for(j=i+1;j<n;j++){//�������� 
			if(student[i].a-student[j].a>5||student[i].b-student[j].b>5)singer=0;//�ֲ����5��singer=0 
			if(student[i].c-student[j].c>5||student[i].sum-student[j].sum>10)singer=0;//�ֲ����5��singer=0 
			if(student[i].a-student[j].a<-5||student[i].b-student[j].b<-5)singer=0;//�ֲ����5��singer=0 
			if(student[i].c-student[j].c<-5||student[i].sum-student[j].sum<-10)singer=0;//�ֲ����5��singer=0 
			if(singer==1){//�������൱ 
				cnt++;//���� 
			}else{
				singer=1;//����singer��ֵ�����´μ��� 
			}
		}
	}
	printf("%d",cnt);//������ 
	return 0;//���������� 
}
