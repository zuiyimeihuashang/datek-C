# 头文件

```
#ifndef _LIST_H  
#define _LIST_H

#include <stdio.h>
#include <stdlib.h>
typedef int DateType;

typedef struct seqlist {
	int n;
	int MAXNUM;
	DateType *element;
} seqlist;
seqlist *create_list(int m);//创建空表
int isNULL(int n);//判断表非空
int find_list(seqlist *plist, DateType x);//查找X
int insert_list(seqlist *plist, int p, DateType x);//插入
int del_list(seqlist *plist, DateType x, int mode) ; //删除（若mode=0为按位删除X为位置，其他mode值为按值删X为数值。 ）
void dellist_allx(seqlist *listp, DateType x) ; //删除所以的X
void reversed(seqlist *listp) ;//逆序翻转 
void sort_list(seqlist * listp);//sort排序 
int min_list(seqlist *listp) ;//查找最小值并返回其下标
void print_list(seqlist * plist);//打印列表 
 #endif
```
  

# 主函数
 
```
#include "list.h"
#include <stdio.h>

int main(){

	int number1=100;
	seqlist * plist1 = create_list(number1);
	int i;
	
	
	printf("初始状态：\n");
	for (i = 0; i < number1; i++)  {//初始化 
		plist1->element[i] = rand()%100;
		printf("%d ",plist1->element[i]);
		plist1->n++;
	}printf("\n");
	
	printf("排序后的list：\n");
	sort_list(plist1);//排序 
	print_list(plist1);//打印排序后的list 
	
	printf("逆序排序后的list：\n");
	reversed(plist1) ;//list的逆序排列                                   
	print_list(plist1);//打印逆序后的list 

	DateType randx = rand()%100;
	printf("find:%d的位置是%d\n",randx,find_list(plist1,randx));	
	dellist_allx(plist1,randx);//删除其中的所有数字 randx
	printf("删除所有的数字%d后共有%d个数字\n",randx,plist1->n);
	
	printf("其中最小的数字是：%d\n",plist1->element[min_list(plist1)]);
	
	if(isNULL(plist1->n)){
		printf("表非空\n"); 
	}else{
		printf("表为空\n");
	}	
	
	printf("删除前共有:%d个元素\n",plist1->n);
	del_list(plist1,0,1);
	printf("删除后共有:%d个元素\n",plist1->n);
	
	insert_list(plist1,0,50);
	printf("插入后共有:%d个元素\n",plist1->n);
	
	return 0;
}
```
 


#创建list函数
 ```
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
```


# 删除和查找及删除所有的X的函数
 ```
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
```


# 插入函数：
```
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
```

 
# 判断list非空：
 ```
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
``` 


# 查找list最小值函数：
```
typedef int DateType;

typedef struct seqlist {
	int n;
	int MAXNUM;
	DateType *element;
} seqlist;

int min_list(seqlist *listp) {//查找最小值并返回其下标

	int min = 0, i = 0;

	for (i = 1; i < listp->n; i++ ) {
		if (listp->element[i] < listp->element[min]) {
			min = i;
		}
	}

	return min;
}
 ```


# 逆序函数：
```
typedef int DateType;

typedef struct seqlist {
	int n;
	int MAXNUM;
	DateType *element;
} seqlist;

void reversed(seqlist *listp) {//逆序排列
	int swap = 0, i ;

	for (i = 0; i < (listp->n + 1) / 2; i++) {
		swap = listp->element[i];
		listp->element[i] = listp->element[listp->n - i-1];
		listp->element[listp->n - i] = swap;
	}
}
```


# 排序函数：
```
typedef int DateType;

typedef struct seqlist {
	int n;
	int MAXNUM;
	DateType *element;
} seqlist;
void sort_list(seqlist * listp){
	int i,j;
	for(i=0;i<listp->n;i++){
		for(j=0;j<listp->n-i-1;j++){
			if(listp->element[j] > listp->element[j+1]){
				int swap = listp->element[j];
				listp->element[j]=listp->element[j+1];
				listp->element[j+1]=swap; 
			}
			
		}
	}
}
```


# 输出list所有数值函数：
```
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
```