#include <stdio.h>//����ͷ 
void  paixu(int *a, int *b, int *c);//���������� 
void swap(int *a, int *b);//������������ֵ�ĺ��� 

main() {//��������� 
	
	int a, b, c, singer1 = 0;//�������ĸ����� 
	scanf("%d %d %d", &a, &b, &c);//���������߳� 
	max(&a, &b, &c);//���� 
	singer1 = a * a + b * b - c * c;//����cos��ֵ 

	if (a+b<=c) {//������ܹ��������� 
		printf("Not triangle");//��� 
	} else {
		if (singer1 > 0) {//����Ƕٽ� 
			printf("Acute triangle\n");//���
		} else if (singer1 < 0) {//��������
			printf("Obtuse triangle\n");//��� 
		} else {
			printf("Right triangle\n");//��� 
		}
		if ((a == b || b == c || a == c) && (a != b || a != c || b != c)) {//����ǵ��������� 
			printf("Isosceles triangle\n");//��� 
		}
		if (a == b && a == c) {//����ǵȱ������� 
			printf("Isosceles triangle\n");//��� 
			printf("Equilateral triangle\n");//��� 
		}

	}

	return 0;//���������� 
}

void paixu(int *a, int *b, int *c) {//���������� 
	if (*a > *b) {//���A>B 
		swap(a, b);//����A,B��ֵ 
	}

	if (*b > *c) {//���B>C
		swap(b, c);//����B,C��ֵ
	}

	if (*a > *b) {//���A>B 
		swap(a, b);//����A,B��ֵ
	}
}

void swap(int *a, int *b) {//���彻����ֵ�ĺ��� 
	int e = 0;//������һ���м���� 
	e = *a;//����A��ֵ 
	*a = *b;//��B��ֵ����A�� 
	*b = e;//��A��ֵ����B�� 
}
