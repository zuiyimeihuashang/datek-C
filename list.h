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
