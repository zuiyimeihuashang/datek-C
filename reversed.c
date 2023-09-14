typedef int DateType;

typedef struct seqlist {
	int n;
	int MAXNUM;
	DateType *element;
} seqlist;

void reversed(seqlist *listp) {//ÄæĞòÅÅÁĞ
	int swap = 0, i ;

	for (i = 0; i < (listp->n + 1) / 2; i++) {
		swap = listp->element[i];
		listp->element[i] = listp->element[listp->n - i-1];
		listp->element[listp->n - i] = swap;
	}
}
