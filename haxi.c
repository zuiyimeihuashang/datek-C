#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int haxi(int x, int randnum);
int chongtu(int *p, int index);

int main() {

	int i, index, x, student[50];
	srand(time(NULL));
	x = rand() % 47 + 1;
	printf("种子是：%d\n", x);

	for (i = 0; i < 50; i++) {
		student[i] = -1;
	}

	for (i = 0; i < 50; i++) {
		index = chongtu(student, haxi(i, x));
		student[index] = i;
	}

	printf("中奖的人有：");

	for (i = 0; i < 50; i++) {
		if ((i + 1) % 5 == 0)
			printf("\n");

		printf("%d ", student[i]);
	}


	return 0;
}

int haxi(int x, int randnum) {

	int mid;
	mid = ((randnum + x) ^ randnum) & (x / 2);
	mid = mid * mid % randnum;
	mid = mid % 50;
	return mid;
}

int chongtu(int *p, int index) {

	int i, m = 0;

	if (p[index] != -1)
		m = haxi(index, 7 ) % 7 + 1;

	for (i = 1; p[index] != -1; i++) {
		index = (index + m * i) % 50;
	}

	return index;
}
