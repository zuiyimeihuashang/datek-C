#include <stdio.h>

typedef int DateType;
typedef struct seqlist {
	int n;
	int MAXNUM;
	DateType *element;
} seqlist;

int insert_list(seqlist *plist, int p, DateType x) {
	if (plist->n >= plist->MAXNUM) {
		printf("overflow\n");
		return 0;
	}

	if (p < 0) {
		printf("index error\n");
		return 0;
	}

	int i = 0;

	for (i = plist->n - 1; i >= p; i--) {
		plist->element[i + 1] = plist->element[i];
	}

	plist->element[p] = x;
	plist->n++;
	return 1;
}
