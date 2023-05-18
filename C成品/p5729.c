#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, x, y, z, i, j, k, l, xiab = 0, cnt = 0;
	scanf("%d %d %d %d", &x, &y, &z, &n);
	int max = x * y * z;
	int* a=(int*)malloc(max*sizeof(int));
	for (i = 0; i < max; i++) {
		a[i] = 1;
	}

	int x2, y2, z2, x1, y1, z1;

	for (i = 0; i < n; i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);

		for (j = x1-1; j < x2; j++) {
			for (k = y1-1; k < y2; k++) {
				for (l = z1-1; l < z2; l++) {
					xiab = j + k * x + l * x * y;
					a[xiab] = 0;
				}
			}
		}
	}
	for (i = 0; i < max; i++) {
		if (a[i])
			cnt++;
	}
	free(a);
	printf("%d", cnt);
	return 0;
}/*13 18 17
11
6 10 13 7 15 17
2 2 4 4 3 8 
2 1 1 7 9 5
2 3 13 5 9 14
1 1 3 5 11 13
9 2 12 12 6 14
2 1 10 9 4 15
3 13 3 9 14 7
8 1 7 9 15 9
4 4 5 9 9 5
2 14 2 6 18 15*/
