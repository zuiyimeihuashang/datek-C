# 主文件
```
#include "link.h"

int main()
{
	link * head = creat_link(),*p=NULL;
	int i=0; 
	for (i=0;i<10;i++){
		Rinsert_link(head,head,i);
		printf("%d ",head->next->info);
	}printf("\n");
	p = locate_link(head,0); 
	printf("locate_link:%d\n",p->info);
	p = locatePre_link(head,p);
	printf("locatePre_link:%d\n",p->info);	
//	print_link(head);printf("\n");
	i = pop_link(head,p);
//	print_link(head);printf("\n" );
	return 0;
}

```
# 头函数
```
#ifndef _link_h
#define _link_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef int DataType;

typedef struct link link;
typedef struct link{
	DataType info;
	link * next;
}link;

link * creat_link(void){//创建头结点
	
	link * head = NULL;
	if(!(head=(link *)malloc(sizeof(link)))){
		printf("out of space!");
		return NULL;
	}
	head->next=NULL;
	head->info = -1;
	return head; 
}

int isNULL_link(link * head){
	
	return (head->next==NULL);
}

link * locate_link(link * head,DataType x){//查找返回X的地址
	
	link * head1 = head;
	while(1){ 
		if(head1->next==NULL||head1->next->info==x)break;
		head1 = head1->next;
	} 
	if(!head1) return NULL; 
	return head1->next; 
}

link * locatePre_link(link * head,link * p){//求P节点的前驱指针 
	if (p==head)return NULL;
	link * pre = head;
	while(1){
		if(pre->next==p||pre->next==NULL){//pre->next==NULL保证P节点不在link中的情况 
			break;
		}
		pre=pre->next;
	}
	return pre;
}

bool  Linsert_link(link * head,link *p,DataType x){//在P节点前插 
	if(p==head){
		return false;
	}else{
		link * px = NULL;
		if(!(px=(link*)malloc(sizeof(link)))){
			return false;
		}
		px->info=x;
		px->next=p; 
		link * Pre_p = locatePre_link(head,p);
		Pre_p->next = px;
	}
}

bool Rinsert_link(link * head,link * p,DataType x){//在P节点后插入 
	
	link * px = NULL;
	if(!(px=(link*)malloc(sizeof(link)))){
		return false;
	}
	px->info=x;
	px->next=p->next;
	p->next=px;

	return true;
}

DataType pop_link(link* head,link * p){//删除并返回P节点的值 
	if(p==head){
		printf("头节点不可删除！");
		return -1; 
	}
	DataType x = p->info;
	link * pre = locatePre_link(head,p);
	pre->next = p->next;
	free(p);
	return x;
}

bool del_link(link * head,DataType x){//删除数值为X的节点 
	
	link * p = head->next;
	while(1){
		if(p->info==x||p==NULL)break;
		p=p->next;
	}
	if(!p)return false;
	pop_link(head,p);
	return true;
} 

/**
void print_link(link * head){
	link * p = head->next;
	while(p!=NULL){
		printf("%d ",p->info);
		p=p->next;
	}
	printf("\n");
}
**/

#endif
```