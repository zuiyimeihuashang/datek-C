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
seqlist *create_list(int m);//�����ձ�
int isNULL(int n);//�жϱ�ǿ�
int find_list(seqlist *plist, DateType x);//����X
int insert_list(seqlist *plist, int p, DateType x);//����
int del_list(seqlist *plist, DateType x, int mode) ; //ɾ������mode=0Ϊ��λɾ��XΪλ�ã�����modeֵΪ��ֵɾXΪ��ֵ�� ��
void dellist_allx(seqlist *listp, DateType x) ; //ɾ�����Ե�X
void reversed(seqlist *listp) ;//����ת 
void sort_list(seqlist * listp);//sort���� 
int min_list(seqlist *listp) ;//������Сֵ���������±�
void print_list(seqlist * plist);//��ӡ�б� 
#endif
