#include <stdio.h>//����ͷ 

main()//��������� 
{	int singer1=0,singer2=0,x;//�������������� 
	scanf("%d",&x);//����һ���� 
	if(x%2==0){//�����ż�� 
		singer1=1;//��singer1ֵΪ1 
	}
	if(x>4&&x<=12){//���X��4��12֮�� 
		singer2=1;//��singer2ֵΪ1 
	}
	if(singer1==1&&singer2==1){//�ж�A 
		printf("1 ");//���1 
	}else{
		printf("0 ");//���0 
	}
		if(singer1==1||singer2==1){//�ж�B
		printf("1 ");//���1 
	}else{
		printf("0 ");//���0 
	}
		if((singer1==0&&singer2==1)||(singer1==1&&singer2==0)){//�ж�C
		printf("1 ");//���1 
	}else{
		printf("0 ");//���0 
	}
		if(singer1==0&&singer2==0){//�ж�D
		printf("1 ");//���1 
	}else{
		printf("0 ");//���0 
	}
	return 0;//���������� 
}
