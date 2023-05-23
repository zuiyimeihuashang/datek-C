#include <stdio.h>
#include <math.h>
int prime(int p);
void gdbh(int x);

int main() {
	int n, i, j;
	scanf("%d", &n);

	for (i = 4; i <= n; i = i + 2) {
		gdbh(i);
	}

	return 0;
}

void gdbh(int x) {
	int j, in;

	for (j = 2; j < x; j++) {
		in = x - j;

		if (prime(j) == 1 && prime(in) == 1) {
			printf("%d=%d+%d\n", x, j, in);
			break;
		}
	}
}

int prime(int p) {//�����ж������ĺ���
	int i = 0, singer = 1;//��������������
	double b = sqrt(p);//������һ��double����

	if (p == 2 || p == 3) { //�����2,3��������
		singer = 1;//singerΪ1
	} else if (p % 6 != 1 && p % 6 != 5) {//�������6X�ĸ���
		singer = 0;//һ����������
	} else if (p > 0) {//��֤����0
		for (i = 2; i <= b; i++) {//��2��ʼ����
			if (p % i == 0) {//���������
				singer = 0;//singerΪ1
			}
		}
	}

	if (p == 1)
		singer = 0;

	return singer;//����singer��ֵ
}