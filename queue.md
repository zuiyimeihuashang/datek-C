# 主函数
```
#include "queue.h"
#define MAX 20

int keyword(queue *p, DateType  *x, int num) { //加密QQ号

	int i, j, cnt = 0;
	DateType * in;
	p->r = 0;
	p->f = 0;
	if ((in=(DateType *)malloc(num*sizeof(DateType)))==NULL){
		printf("空间不足");
		return -1; 
	}
	
	for (i = 0; i < num; i++) {
		char key_in = i;
		install_queue(p,key_in);
		in[i]=x[i];
	}
 
	for (j = 0; j < num; j++) {
		int ass  = pop_queue(p);
		x[ass]=in[cnt++]; // x[cnt]; 
		install_queue(p, pop_queue(p));
	}

	return 0;
}

void password(queue *p, DateType *x, int num) { //解密QQ号

	int i, j, cnt = 0;
	p->r = 0;
	p->f = 0;

	for (i = 0; i < num; i++) {
		install_queue(p, x[i]);
	}

	for (j = 0; j < num; j++) {
		x[cnt++] = pop_queue(p); 
		install_queue(p,pop_queue(p));
	}
}
 
int main(){
	
	int i=0,j,num;
	DateType * x = NULL;
	printf("请输入需要加密数字 ：\n");
	if(!(x=(DateType *)malloc(num*sizeof(DateType))))return -1; 
	queue * p =creat_queue(MAX);
	scanf("%s",x); 
	num = strlen(x); 
	keyword(p,x,num); 
	printf("keyword:%s\n",x); 
	password(p,x,num);  
	printf("password:%s\n",x); 
	free(p);
	return 0;
}
 
```
# 头文件
```
#ifndef _QUEUE_H
#define _QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char DateType;
typedef struct queue {
	DateType *element;
	int MAXNUM;
	int f, r;
} queue;

queue *creat_queue(int max) {//创建有MAX个元素的队列
	max = max + 1;
	queue *pqueue;

	if (!(pqueue = (queue *)malloc(sizeof(queue)))) {
		return NULL;
	} else {
		if (!(pqueue->element = (DateType *)malloc(max * sizeof(DateType)))) {
			free(pqueue);
			return NULL;
		} else {
			pqueue->f = pqueue->r = 0;
			pqueue->MAXNUM = max;
		}
	}

	return pqueue;
}

DateType pop_queue(queue *pqueue) { //删除并返回队头元素
	if (pqueue->r != pqueue->f) {
		DateType x = pqueue->element[pqueue->f];
		pqueue->f = (pqueue->f + 1) % pqueue->MAXNUM;
		return x;
	} else {
		return -1;
	}
}

DateType head_queue(queue *pqueue) { //返回队头元素
	if (pqueue->r != pqueue->f) {
		return pqueue->element[pqueue->f];
	} else {
		return -1;
	}
}

int install_queue(queue *pqueue, DateType x) { //在队尾插入一个元素
	if (pqueue->f != (pqueue->r + 1) % pqueue->MAXNUM) {
		pqueue->element[pqueue->r] = x;
		pqueue->r = (pqueue->r + 1) % pqueue->MAXNUM;
	} else {
		return -1;
	}

	return 0;
}

int isNULL_queue(queue *pqueue) { //判断队列是否为空
	return (pqueue->f != pqueue->r);
}

void print(queue *pqueue) {
	int cnt;
	cnt = pqueue->f;

	while (cnt != pqueue->r) {
		printf("%d", pqueue->element[cnt++]);
	}

	printf("\n");
}

#endif 
```
