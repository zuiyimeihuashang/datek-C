#include <stdio.h>// ����ͷ 

main()//��������� 
{
	int year=0,singer=0;//��������������year��singer 
	scanf("%d",&year);//������� 
	if(year%4==0&&year%100!=0){//����Ƿ��������� 
		singer=1;//��singerΪ1 
	}else if(year%400==0){//������������� 
		singer=1;//��singerΪ1 
	}
	printf("%d",singer);//���singer��ֵ 
	
	return 0;//���������� 
 } 
