#include <stdio.h>// ����ͷ 
void  paixu(int *a, int *b, int *c);//���������� 
void swap(int *a, int *b);//������������ֵ�ĺ��� 

main() {//��������� 
	int a, b, c;//�������������� 
	scanf("%d %d %d", &a, &b, &c);//���������� 
	paixu(&a, &b, &c);//���� 
	printf("%d %d %d", a, b, c);//������ 
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
