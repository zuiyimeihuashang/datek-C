#include "list.h"
#include <stdio.h>

int main(){

	int number1=100;
	seqlist * plist1 = create_list(number1);
	int i;
	
	printf("��ʼ״̬��\n");
	for (i = 0; i < number1; i++)  {//��ʼ�� 
		plist1->element[i] = rand()%100;
		printf("%d ",plist1->element[i]);
		plist1->n++;
	}printf("\n");
	
	printf("������list��\n");
	sort_list(plist1);//���� 
	print_list(plist1);//��ӡ������list 
	
	printf("����������list��\n");
	reversed(plist1) ;//list����������                                   
	print_list(plist1);//��ӡ������list 

	DateType randx = rand()%100;
	printf("find:%d��λ����%d\n",randx,find_list(plist1,randx));	
	dellist_allx(plist1,randx);//ɾ�����е��������� randx
	printf("ɾ�����е�����%d����%d������\n",randx,plist1->n);
	
	printf("������С�������ǣ�%d\n",plist1->element[min_list(plist1)]);
	
	if(isNULL(plist1->n)){
		printf("��ǿ�\n"); 
	}else{
		printf("��Ϊ��\n");
	}	
	
	printf("ɾ��ǰ����:%d��Ԫ��\n",plist1->n);
	del_list(plist1,0,1);
	printf("ɾ������:%d��Ԫ��\n",plist1->n);
	
	insert_list(plist1,0,50);
	printf("�������:%d��Ԫ��\n",plist1->n);
	
	return 0;
}
