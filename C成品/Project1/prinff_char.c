//#include <stdio.h>
void lingxing(char a)
{
	int i, j, k;
	for (i = 0, k = 2; i < 5; i = i + 2, k--) {
		for (j = 0; j < k; j++) {
			printf(" ");
		}
		for (j = 0; j <= i; j++) {
			printf("%c", a);
		}
		printf("\n");
	}
}