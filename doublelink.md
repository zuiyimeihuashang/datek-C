# 头文件
```
# include "doublelink.h"

int main()
{
	doublelink* head=creat_doublelink();
	printf("create:%p %p %d\n",head->llink ,head->rlink,head->info);
	printf("isNULL:%d\n",isNULL_doublelink(head));
	doublelink * p = head;
	inster_doublelink(p,99);   
	inster_doublelink(head,100); 
	p=index_doublelink(head,99);
	printf("%d\n",p->info);
/*  	del_doublelink(head->rlink);
	del_doublelink(head->rlink);
 	print_doublelink(head);
	printf("%d\n",head->rlink);*/ 
	inster_doublelink(head,101);
	print_doublelink(head);
	printf("isNULL:%d\n",isNULL_doublelink(head));
	return 0;
}
```
# 主函数
```
#ifndef _doublelink_h

#define _doublelink_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int DataType;
typedef struct doublelink doublelink;
typedef struct doublelink{
	DataType info;
	doublelink * llink;
	doublelink * rlink;
}doublelink; 

doublelink * creat_doublelink(void){
 	doublelink * p=NULL;
	if(!(p=(doublelink *)malloc(sizeof(doublelink))))
		return NULL;
	p->llink=NULL;
	p->rlink=NULL; 
	p->info=0;
	return p;
}

int isNULL_doublelink(doublelink*p){
	return p->rlink==NULL;
}

doublelink * index_doublelink(doublelink *head,DataType x){
	doublelink * p = head;
	while(p->info != x){
		p = p->rlink ;
		if(p==NULL)break;
	}
	if(p->info == x)return p;
	return NULL;
}

void inster_doublelink(doublelink*p,DataType x){
	doublelink * p1=NULL;
	if((p1=(doublelink*)malloc(sizeof(doublelink)))){//在P节点后插入一个节点 
		p1->info=x;
		p1->llink=p;
		p1->rlink=p->rlink;
		p->rlink=p1;
		if(p1->rlink)p1->rlink->llink=p;
	}
}

void del_doublelink(doublelink * p){
	if(p->llink!=NULL){
	p->llink->rlink=p->rlink;
	if(p->rlink!=NULL){
		p->rlink->llink=p->llink;
	}
	free(p);		
	}
}

void pop_doublelink(doublelink *p,DataType x){
	doublelink * p1 = index_doublelink(p,x);
	del_doublelink(p1);
}
void print_doublelink(doublelink* head){
	doublelink * p1=NULL;
	p1 = head->rlink;
	while(p1!=NULL){
		printf("%d ",p1->info);
		p1=p1->rlink;
		if(p1==NULL)printf("\n");
	}
}
#endif
```