typedef int DateType;

typedef struct seqlist {
	int n;
	int MAXNUM;
	DateType *element;
} seqlist;

int min_list(seqlist *listp) {//������Сֵ���������±�

	int min = 0, i = 0;

	for (i = 1; i < listp->n; i++ ) {
		if (listp->element[i] < listp->element[min]) {
			min = i;
		}
	}

	return min;
}