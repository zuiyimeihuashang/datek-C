#include <stdio.h>//ͷ�ļ� 

main() {//������ 
	int zm = 0;//������һ������ 
	scanf("%d", &zm);//Ϊ������ֵ 

	if (zm == 100) {//���ж��Ƿ����100 
		printf("Perfect\n");//�ǣ����Perfect 
	}  if (zm >= 90 &&zm<100) {//�ж��Ƿ����90��100֮�� 
		printf("Great\n");//�ǣ���� Great
	} if (zm >= 60&&zm<=89) {//�ж��Ƿ����60��89֮�� 
		printf("Good\n");//�ǣ���� Good
	}  if (zm >= 0&&zm < 60) {//�ж��Ƿ����0��60֮�� 
		printf("Bad\n");//�ǣ���� Bad
	}

	return 0;//���������� 
}
