#include <stdio.h>

int main() {
	int i, n, sum = 1;
	scanf("%d", &n);

	for (i = 0; i < n - 1; i++) {
		sum = (sum + 1) * 2;
	}

	printf("%d", sum);
	return 0;
}