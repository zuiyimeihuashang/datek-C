#include <stdio.h>//ͷ�ļ� 

main() {//������ 
	int a;//������һ������A 
	scanf("%d", &a);//д��A��ֵ 

	if (a <= 100 && a >= 1) {//��֤A�ķ�Χ 
		if (a % 2 != 0) {//A����ż�� 
			printf("NO");//��� NO 
		} else if (a != 2) {//�ų�A=2����� 
			printf("YES");//���YES 
		} else//��A=2 
			printf("NO");//���������NO 


		return 0;//���������� 
	}
}
