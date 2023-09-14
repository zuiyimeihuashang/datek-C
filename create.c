#include <stdlib.h>
#include <stdio.h>

typedef int DateType;
typedef struct seqlist {
	int n;
	int MAXNUM;
	DateType *element;
} seqlist;

seqlist * create_list(int m) {
	seqlist *plist = (seqlist *)malloc(sizeof(seqlist));

	if (plist) {
		plist -> element = (DateType *)malloc(m * sizeof(DateType));

		if (plist -> element) {
			plist ->MAXNUM = m;
			plist ->n = 0;
			return plist;
		} else {
			free(plist);
			printf("number space error");
		}
	} else {
		printf("out of space");
		return NULL;
	}
}
