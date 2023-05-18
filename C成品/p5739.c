#include <stdio.h>
int jiechen(int n);

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", jiechen(n));
	return 0;
}

int jiechen(int n) {
	if (n == 1)
		return n;
	else
		return n * jiechen(n - 1);
}