#include <stdio.h>

main() {
	int a[100] = {0}, i = 1, cnt = 0;

	for (i = 0;; i++) {
		scanf("%d", &a[i]);//3 65 23 5 34 1 30 0

		if (a[i] == 0)
			break;

		cnt++;
	}

	for (i = cnt - 1; i >= 0; i--) {
		printf("%d ", a[i]);
	}


	return 0;
}