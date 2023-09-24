# main函数
```
#include "stack.h"
#define MAX 30

int main() {
	seqstack *pstack = create_stack(MAX);
	DateType str[MAX] = {'\0'};//31+2*2/  {[(3+1)*2]/2}
	gets(str);puts(str);
	int x =0,i=0;
	while(re_stack(pstack,str) != 0){
		printf("Enter error,please enter again:\n");
		gets(str);puts(str);
	}
	mksufiic_stack(pstack,str);
	x = math_stack(pstack,str);
	printf("%s\n",str);
	printf("out:%d",x);

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

typedef char DateType;
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

int link(char operator1) {//返回运算优先级 
    switch (operator1) {
        case '+':
        case '-':
        return 1;
        case '*':
        case '/':
        return 2; 
    }
    return -1;
}
int fuhao(char a){//给符号一个数值 
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

int re_stack(seqstack *pstack,  const char *str) {//判断是否符号是否匹配，匹配返回0反之返回-1.
	int i, len = strlen(str);

	for (i = 0; i < len; i++) {
		if(str[i]<0||str[i]>255){
			while(pop_stack(pstack)!=-1);
			return -1;
		} 
		if (fuhao(str[i])>0) {
			push_stack(pstack, str[i]);
		} else if (fuhao(str[i]) < 0) {
			DateType re = pop_stack(pstack);
            // "()[]{}" ASCLL 40 41 91 93 123 125
            if(fuhao(re)+fuhao(str[i])!=0){
				while(pop_stack(pstack)!=-1);
				return -1;            	
			}
		}
	}
	return 0;
}


void mksufiic_stack(seqstack * pstack,DateType * sufiic){//中缀表达式转后缀表达式
	
	int i,len=strlen(sufiic),cnt=0;
	char out[1000]={'\0'};
	for(i=0;i<len;i++){
		if(sufiic[i]>='0'&&sufiic[i]<='9'){
			out[cnt++]=sufiic[i];
		}else{
			if(pstack->top ==-1){
				push_stack(pstack,sufiic[i]);
			}else{
				if(link(sufiic[i])!=-1){//如是运算符 
					while(link(top_stack(pstack))!=-1&&link(top_stack(pstack)) >= link(sufiic[i])){
						out[cnt++]=pop_stack(pstack);
					}
					push_stack(pstack,sufiic[i]);
				}else if(fuhao(sufiic[i])>0){//若是左符号 
					push_stack(pstack,sufiic[i]);
				}else{
					while(fuhao(top_stack(pstack)) + fuhao(sufiic[i]) !=0){
						out[cnt++]=pop_stack(pstack);
					}
					pop_stack(pstack);
				}
			}
		}
		if(i==len-1){
			while(pstack->top!=-1){
				if(fuhao(top_stack(pstack))==0){
					out[cnt++]=pop_stack(pstack);
				}else{
					pop_stack(pstack);
				}
			}
		}
	}
	strcpy(sufiic,out);	
}
int math_stack(seqstack * pstack,char * math){//后缀表达式的计算
	int i,len = strlen(math);
	char z='\0';
	//pstack->element[pstack->top]
	for(i=0;i<len;i++){
		 if(link(math[i]) == -1){
		 	push_stack(pstack,math[i]);
		 }else{
		 	DateType x=pop_stack(pstack),y=pop_stack(pstack);
		 	switch(math[i]){
		 		case '+': z = x+y-'0';break;
		 		case '-': z = x-y-'0';break;
				case '*': z = (x-'0')*(y-'0')+'0';break;
				case '/': z = (y-'0')/(x-'0')+'0';break;
				default: break;
			}
			push_stack(pstack,z);
			 
		 }
	}
	len = pstack->element[pstack->top]-'0';
	return len;
}
#endif
```
***
