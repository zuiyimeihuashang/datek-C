#include <stdio.h>

int found(int found_a[], int found_e, int *found_i, int found_len);
int main() {
	int i = 0, singer = 5, in = 1;
	int a[10] = {1, 2, 3, 4, 5, 6, 7}, e = 0;
	scanf("%d", &e);
	singer = found(a, e, &i, 6);
	printf("singer=%d i=%d", singer, i);
	return 0;
}

int found(int found_a[], int found_e, int *found_i, int found_len) {
	int i;
	int found_add = 0, found_end = found_len, found_mid = found_len / 2, found_singer = 0;

	for (i = 0; i < found_len; i++) {
		if (found_a[found_mid] == found_e) {
			*found_i = found_mid;
			found_singer = 1;
			break;
		}

		if (found_a[found_mid] > found_e) {
			found_end = found_mid-1;
			found_mid = (found_end + found_add) / 2 ;
		} else {
			found_add = found_mid+1;
			found_mid = (found_end + found_add) / 2;
		}
	}

	return found_singer;
}
