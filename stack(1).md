***
# 主函数
```
#include "stack.h"

int main()
{
	const int MAX=32;
	seqstack *pstack = create_stack(MAX);
	int i=0,x;
	char str1[]="32+9*2/",st;
	DateType str[MAX];
	while((st=getchar())!='\n'){
		if(st>='0'&&st<='9'){
			str[i++]=st-'0';
		}else{
			str[i++]=st;//{[(3+2)*2]/2}
		} 
	}
	x=re_stack(pstack,str,i);
	if(!x){
		printf("匹配\n"); 
	}else{
		printf("不匹配\n"); 
	}
	x=math_stack(pstack,str1);
	printf("%s的计算结果是：%d\n",str1,x);
	return 0;
}
```
***
# 头文件
```
#ifndef _STACK_H
#define _STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int DateType;
typedef struct seqstack {
	int top, MAXNUM;
	DateType *element;
} seqstack;

seqstack   *create_stack(int m) { //创建空栈
	seqstack *pstack = (seqstack *)malloc(sizeof(seqstack));

	if (pstack) {
		pstack-> element = (DateType *)malloc(m * sizeof(DateType));

		if (pstack -> element) {
			pstack ->top = -1;
			pstack ->MAXNUM = m;
			return  pstack;
		} else {
			free(pstack);
			free(pstack->element);
			printf("number space error");
		}
	} else {
		free(pstack);
		printf("out of space");
		return NULL;
	}
}

void push_stack(seqstack *pstack, DateType x) { //压栈

	if (pstack->top+1 < pstack->MAXNUM) {
		pstack->element[++pstack->top] = x;
	} else {
		printf("overflow\n");
	}
}

DateType pop_stack(seqstack *pstack) {//移除并返回栈顶元素

	if (pstack->top == -1) {
		printf("underflow\n");
		return -1;
	} else { 
		return (pstack->element[pstack->top--]);
	}

}

DateType top_stack(seqstack *pstack) {//返回栈顶元素

	if (pstack->top != -1) {
		return (pstack->element[pstack->top]);
	} else {
		printf("underflow\n");
		return -1;
	}

}

int isNULL_stack(seqstack *pstack) {//判断stack是否为空

/*	if (pstack->top != -1) {
		return 1;
	} else {
		return -1;
	}*/
	return (pstack->top != -1);
}

void print_stack(seqstack *pstack) {

	int top1 = -1;

	if (pstack->top == -1)
		printf("NO element\n");

	for (top1 = pstack->top; top1 > -1; top1--) {
		//printf("hi\n");
		if (top1 != -1)
			printf("%d\n", pstack->element[top1]);
	}
}

/*以下不属于stack基础操作*/

int fuhao(DateType a){//给符号一个数值 
	switch (a){
		case '(':return 1;
		case ')':return -1;
		case '[':return 2;
		case ']':return -2;
		case '{':return 3;
		case '}':return -3;
	}
	return 0;
}

int link(char operator1) {
    switch (operator1) {
        case '+':
        case '-':
        return 0;
        case '*':
        case '/':
        return 1; 
    }
    return -1;
}

int re_stack(seqstack *pstack,  const DateType *str,int len) {//判断是否符号是否匹配，匹配返回0反之返回-1.
	int i;

	for (i = 0; i < len; i++) {
		if(str[i]<0||str[i]>255){
			while(pop_stack(pstack)!=-1);
			return -1;
		} 
		if (fuhao(str[i])>0) {
			push_stack(pstack, str[i]);
		} else if (fuhao(str[i]) < 0) {
			DateType re = pop_stack(pstack);
            // "()[]{}" ASCLL 40 41 91 93 123 125//pstack->element[pstack->top]
            if(fuhao(re)+fuhao(str[i])!=0){
				pstack->top =-1;
				return -1;            	
			}
		}
	}
	pstack->top =-1;
	return 0;
}



int math_stack(seqstack * pstack,char * math){//后缀表达式的计算
	int i,len = strlen(math);
	DateType x,y,z;
	//pstack->element[pstack->top]
	for(i=0;i<len;i++){
		 if(link(math[i]) == -1){
		 	z = math[i]-'0';
		 	push_stack(pstack,z);
		 }else{
		 	DateType x,y;
		 	x=pop_stack(pstack);
		 	y=pop_stack(pstack);
		 	switch(math[i]){
		 		case '+': z = x+y;break;
		 		case '-': z = y-x;break;
				case '*': z = x*y;break;
				case '/': z = y/x;break;
			}
			push_stack(pstack,z);
			 
		 }
	}
	len = pop_stack(pstack);
	return len;
}
#endif
```
***
