# 主文件
```
#include "sort.h"
#include <time.h> 
int main() {
	const int MAXN = 8;
	sortobject *p = (sortobject*)malloc(sizeof(sortobject));
	p->n=MAXN;p->record=(recordnode*)malloc(sizeof(p->n*sizeof(recordnode)));
	int i,j;
	srand((unsigned)time(NULL));
	for(j=1;j<5;j++){
		for(i=0;i<MAXN;i++){
			p->record[i].key =rand()%100;//MAXN-i;//
			printf("%d ",p->record[i].key);
		}printf("\n");
		switch(j){
			case 1:
				selectsort(p,MAXN);
				printf("selectsort:");
				break;
			case 2:
				instersort(p);
				printf("instersort:");
				break;
			case 3:
				shellsort(p,MAXN/2);
				printf("shellsort:");
				break;
			case 4:
				binsort(p);
				printf("binsort:");
				break;
		}
		for(i=0;i<MAXN;i++){
			printf("%d ",p->record[i].key);
		}printf("\n");
		printf("\n");		
	}
	free(p->record);
	free(p);	
	return 0;
}

```
# 头函数
```
#ifndef _sort_h
#define _sort_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int KeyType;
typedef int DataType;
typedef struct {
	KeyType key;
	DataType info;
} recordnode;

typedef struct {
	int n;
	recordnode *record;
} sortobject;

void selectsort(sortobject *p, int len) {
	int i, j;

	for (i = 0; i < len - 1; i++) {
		for (j = i + 1; j < len; j++) {
			int k = i;

			if (p->record[k].key > p->record[j].key) {
				k = j;
			}

			if (k != i) {
				recordnode swap = p->record[i];
				p->record[i] = p->record[k];
				p->record[k] = swap;
			}
		}
	}
}

void instersort(sortobject *p) {
	int i, j;
	recordnode *data = p->record;
	recordnode temp;

	for (i = 1; i < p->n; i++) {
		temp = data[i];

		for (j = i - 1; data[j].key > temp.key && j >= 0; j--) {
			data[j + 1] = data[j];
		}

		if (j != i - 1) {
			data[j + 1] = temp;
		}

		/*	int k;
			printf("%d",i);
			for(k=0;k<p->n;k++){
				printf("%d",data[k].key);
			}
			printf("\n");*/
	}
}

void shellsort(sortobject *p, int d) {
	int i, j,inc;
	recordnode *data = p->record, temp;

	for (inc=d; inc > 0; inc = inc / 2) {
		for (i = inc; i < p->n; i++) {
			temp = data[i];

			for (j = i - inc;j >= 0&&temp.key<data[j].key; j = j - inc) {
				data[j + inc] = data[j];
			}

			data[j + inc] = temp;
		}	

	}
}
void binsort(sortobject *p){
	
	int i,j,left,right,mid;
	recordnode *data = p->record, temp;
	for(i=1;i<p->n;i++){
		temp = data[i];left=0;right=i-1;
		while(left<=right){
			mid=(left+right)/2;
			if(temp.key <data[mid].key)right=mid-1;
			else left=mid+1;
		}
		for(j=i-1;j>=left;j--){
			data[j+1]=data[j];
		}
		if(left!=i){
			data[left]=temp;
		}
	}
}

#endif
```