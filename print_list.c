#include <stdio.h>
typedef int DateType;

typedef struct seqlist {
	int n;
	int MAXNUM;
	DateType *element;
} seqlist;
void print_list(seqlist * plist){
	int i;
	for (i=0;i<plist->n;i++){
		printf("%d ",plist->element[i]);
	}
	printf("\n"); 
} 
