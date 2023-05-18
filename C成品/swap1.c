#include <stdio.h>

void swap(int *, int *);
main(void) {
	int a = 2, b = 3;
	swap(&a, &b);
	printf("hi\n");
	printf("%d,%d", a, b);
	return 0;
}

void swap(int *a, int *b) {
	int c = 0;
	c = *a;
	*a = *b;
	printf("hi\n");
	*a = c;
}