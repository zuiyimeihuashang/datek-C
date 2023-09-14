#include <stdio.h>

typedef int DateType;
typedef struct seqlist {
	int n;
	int MAXNUM;
	DateType *element;
} seqlist;

int isNULL(int n) {
	return (n != 0);
}
