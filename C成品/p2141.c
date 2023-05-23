#include <stdio.h>
void sort(int sort_a[], int sort_len);
void swap(int *a, int *b) ;
int found(int found_a[], int found_e, int *found_i, int found_len);

int main() {
	int n, i, j;
	scanf("%d", &n);
	int a[n];

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	int cnt = 0,in = 0, singer = 0,I=0;
	sort(a, n); 
	for (i = 2; i < n; i++) {
		for (j = 0; j < i; j++) {
			in = a[i] - a[j];
			singer = found(a, in, &I, i);
			if(in*2==a[i])singer=0;//排除a[j]+a[j]=a[i];的情况 
			if (singer == 1) {//printf("%d\n",a[i]);
				break;
			}

		}
		if (singer == 1) {
			cnt++;
			singer = 0;
		}		
	}

	printf("%d", cnt);
	return 0;
}

int found(int found_a[], int found_e, int *found_i, int found_len) {
	int i;
	int found_add = 0, found_end = found_len-1, found_mid = found_len / 2, found_singer = 0;

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

void sort(int sort_a[], int sort_len) {
	//9123087645
	int i, j, k;
	k = sort_len; //字符数组最后一个是/0不参与排序

	for (j = 0; j < sort_len; j++) {
		for (i = 0; i < k - 1; i++) {
			if (sort_a[i] >= sort_a[i + 1]) {
				swap(&sort_a[i], &sort_a[i + 1]);
			}
		}

		k--;
	}

}

void swap(int *a, int *b) {
	int c = 0;
	c = *b;
	*b = *a;
	*a = c;
}
