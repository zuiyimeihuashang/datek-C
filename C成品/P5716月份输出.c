#include <stdio.h>//ͷ�ļ� 
int runear(int year) ;//�����жϺ������� 

main()//��������� 
{	int year,yue,singer=0;//�������������� 
	scanf("%d %d",&year,&yue);//����������·� 
	if(runear(year)==1){//������ú��������� 
		singer=1;//��singerΪ1 
	}
	if(yue==4||yue==6||yue==9||yue==11){//�����30����·� 
		printf("30");//���30 
	}else if(yue==2){//����Ƕ��� 
		if(singer==1){//��������� 
			printf("29");//���29 
		}else{
			printf("28");//�����������28 
		}
	}else{
		printf("31");//���31 
	}
	
	return 0;//���������� 
 } 
int runear(int year) //���꺯���ж� 
{
	int singer=0;//��������������singer 
	if(year%4==0&&year%100!=0){//����Ƿ��������� 
		singer=1;//��singerΪ1 
	}else if(year%400==0){//������������� 
		singer=1;//��singerΪ1 
	}
	return singer;//��������������singer��ֵ 
 } 
