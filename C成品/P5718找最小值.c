#include <stdio.h>//����ͷ 

main() {//��������� 
	int N, i, min = 0, b;//�������ĸ����� 
	scanf("%d %d", &N, &min);//��������͵�һ���� 
	for (i = 1; i < N; i++) {//ѭ������ 
		scanf("%d", &b);//������ֵ 
		min = min < b ? min : b;//min���ڽ�С��ֵ 
	}
	printf("%d", min);//������ 
	return 0;//���������� 
}
