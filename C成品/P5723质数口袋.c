#include <stdio.h>// ����ͷ 
#include <math.h>//����ͷ 
int prime(int p);//�����ж������ĺ��� 

main() {//��������� 
	int ll, i, sum = 0, cnt=0;;//�������ĸ����� 
	scanf("%d", &ll);//����ڴ���С 
if(ll>1){//��֤����1 
	for (i = 2; sum <= ll; i++) {//ѭ����ʼ 
		if (prime(i) == 1) {//��������� 
			sum += i;//�ۼ� 
		if(sum>ll){//������� �ڴ� 
			break;//���� 
		}
		printf("%d\n", i);//������� 
		cnt++;//���� 
		}
	}
}
	printf("%d",cnt);//����������� 
	return 0;//���������� 
}

int prime(int p) {//�����ж������ĺ��� 
	int i = 0, singer = 1;//�������������� 
	double b = sqrt(p);//������һ��double���� 

	if (p==2||p==3) {//�����2,3�������� 
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
	if(p==1)singer=0;
	return singer;//����singer��ֵ 
}
