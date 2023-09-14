#include <stdio.h>

typedef int DateType;
typedef struct seqlist {
	int n;
	int MAXNUM;
	DateType *element;
} seqlist;

int find_list(seqlist *plist, DateType x) {
	int i;

	for (i = 0; i < plist->MAXNUM; i++) {
		if (plist-> element[i] == x) {
			return i;
		}
	}

	return - 1;
}

int del_list(seqlist *plist, DateType x, int mode) { //若mode=0为按位删除X为位置，其他mode值为按值删X为数值。
	int index;

	if (!mode) {
		index = x;
	} else {
		index = find_list(plist, x);
	}

	if (index != -1) {
		int i = 0;

		for (i = index; i < plist->n; i++) {
			plist->element[i] = plist->element[i + 1];
		}

		plist->n--;
		return 0;
	} else {
		return -1;
	}
}

void dellist_allx(seqlist *listp, DateType x) { //删除所以的X

	while (del_list(listp, x, 1) != -1); //printf("hi\n");

}
