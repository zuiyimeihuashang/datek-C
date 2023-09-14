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
