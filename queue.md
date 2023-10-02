# 主函数
```
#include "queue.h"
#define MAX 20
 
int main(){
	
	int i=0,j,num,*x ;//{3,3,1,6,0,6,5,9,9,7}
	printf("请输入需要加密的数字个数：\n");
	scanf("%d",&num);
	printf("请输入需要加密数字,以空格隔开：\n");
	if(!(x=(int *)malloc(num*sizeof(DateType))))return -1; 
	queue * p =creat_queue(MAX);
	for(i=0;i<num;i++){
		scanf("%d",&x[i]);
	}
	keyword(p,x,num);
	for(i=0;i<num;i++){
		printf("%d",x[i]);
	}printf("\n");
	password(p,x,num);  
	for(i=0;i<num;i++){
		printf("%d",x[i]);
	}printf("\n");
	 
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

typedef int DateType;
typedef struct queue{
	DateType * element;
	int MAXNUM;
	int f,r;
}queue;

queue * creat_queue(int max){//创建有MAX个元素的队列 
	max=max+1;
	queue * pqueue;
	if(!(pqueue = (queue*)malloc(sizeof(queue)))){
		return NULL;
	}else{
		if(!(pqueue->element=(DateType*)malloc(max*sizeof(DateType)))){
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
		DateType x = pqueue->element[pqueue->f];
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

//以下不属于栈的基操
int keyword(queue * p,DateType*  x,int num){//加密QQ号 

	int i,j,k,cnt=0; 
	p->r=0;p->f=0;
	DateType * in;
	if(!(in = (DateType*)malloc(num*sizeof(DateType))))return -1;
	if(num%2!=0){
		j=num/2+1;
	}else{
		j=num/2;
	}
	for(i=1;i<=num;i++){
		if(i<=j){
			in[2*i-2]=x[i-1];
			cnt=2*i-1;
		}else{
			install_queue(p,x[i-1]);
		}
	} 
	if(j>num/2){//如有奇数个数 
		i=pop_queue(p);
		install_queue(p,i);
	}
	for(k=1;k<num;k+=2){
		in[k]=pop_queue(p); 
		i=pop_queue(p);
		install_queue(p,i); 
	}	
	for(i=0;i<num;i++){
		x[i]=in[i];
	}
	return 0;
} 

void password(queue * p,DateType * x,int num){//解密QQ号 

	int i,j,cnt=0;
	p->r=0;p->f=0;
	for(i=0;i<num;i++){
		install_queue(p,x[i]);
	}
	for(j=0;j<num;j++){
		x[cnt++]=pop_queue(p); 
		i=pop_queue(p);
		install_queue(p,i); 
	}	
} 
#endif 
```