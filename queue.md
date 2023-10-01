# 主函数
```
#include "queue.h"

int main(){
	
	int i=0,j,x[]={5,4,3,2,1};
	keyword(x,5);
	for(i=0;i<5;i++){
		printf("%d",x[i]);
	}printf("\n");
	password(x,5);  
	for(i=0;i<5;i++){
		printf("%d",x[i]);
	}printf("\n");

	return 0;
}
```
# 头文件
```
#ifndef _QUEUE_H
#define _QUEUE_H

#include <stdio.h>
#include <stdlib.h>

typedef int DateType;
typedef struct queue{
	DateType * element;
	int MAXNUM;
	int f,r;
}queue;

queue* creat_queue(int max){//创建有MAX个元素的队列 
	max=max+1;
	queue * pqueue = (queue*)malloc(sizeof(queue));
	if(pqueue==NULL){
		return NULL;
	}else{
		pqueue->element=(DateType*)malloc(max*sizeof(DateType));
		if(pqueue->element==NULL){
			free(pqueue);
			return NULL;
		}else{
			pqueue->f=pqueue->r=0;
			pqueue->MAXNUM=max;
		}
	}
	return pqueue;
}

DateType pop_queue(queue* pqueue){//删除并返回队头元素 
	if(pqueue->r!=pqueue->f){
		int x = pqueue->element[pqueue->f];
		pqueue->f=(pqueue->f+1)%pqueue->MAXNUM;
		return x;
	}else{
		return -1;
	}
}

DateType head_queue(queue* pqueue){//返回队头元素 
	if(pqueue->r!=pqueue->f){
		return pqueue->element[pqueue->f];
	}else{
		return -1;
	}
}
int install_queue(queue* pqueue ,DateType x){//在队尾插入一个元素 
	if (pqueue->f!=(pqueue->r+1)%pqueue->MAXNUM){
		pqueue->element[pqueue->r]=x;
		pqueue->r=(pqueue->r+1)%pqueue->MAXNUM;
	}else{
		return -1;
	}
	return 0;
}
int isNULL_queue(queue* pqueue){//判断队列是否为空 
	return (pqueue->f != pqueue->r);
}
void print(queue * pqueue){
	int cnt;
	cnt=pqueue->f;
	while(cnt!=pqueue->r){
		printf("%d",pqueue->element[cnt++]);
	}
	printf("\n");
}
//以下不属于queue基础操作
void keyword(DateType * x,int num){//加密QQ号 
	queue * p = creat_queue(num);
	int i,j;// pqueue->element[0] pqueue->element[1] pqueue->element[2]
	if(num%2!=0){
		j=num/2+1;
	}else{
		j=num/2;
	}
	for(i=0;i<j;i++){//pqueue->element[4] pqueue->element[3]pqueue->element[5]
		install_queue(p,x[i]);
		if(i!=(num-i-1))install_queue(p,x[num-i-1]);
	}
	for(i=0;i<num;i++){
		x[num-i-1]=pop_queue(p);
	}	
	free(p);
} 

void password(DateType * x,int num){//解密QQ号 
	queue * p =creat_queue(num);
	int i,cnt=0;
	for(i=0;i<num;i++){
		install_queue(p,x[i]);
	}
	while(p->r!=p->f){
		x[cnt++]=pop_queue(p);
		i=pop_queue(p);
		install_queue(p,i);
	//	print(p);
	}
	free(p);	
}
#endif 
```