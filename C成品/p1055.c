#include <stdio.h>

main() {
	char a[13];
	int sum = 0, i, j = 1;//0-670-82162-4  0-670-82162-0
	char zf = '/0';
	scanf("%s", a);

	for (i = 0; i < 13; i++) {
		if (i != 1 && i != 5 && i != 12  && i != 11) {
			sum += (a[i] - 48) * j;
			j++;
		}
	}

//	printf("%d\n", sum);
	sum = sum % 11;
//	printf("%d\n", sum);


	if (sum == 10) {
		zf = 'X';
	} else {
		zf = sum + 48;
	}

//	printf("%c\n", zf);
//	printf("%c\n", a[12]);

	if (zf == a[12]) {
		printf("Right");
	} else {
		a[12] = zf ;

		for (i = 0; i < 13; i++) {
			printf("%c", a[i]);
		}
	}

	return 0;
}
