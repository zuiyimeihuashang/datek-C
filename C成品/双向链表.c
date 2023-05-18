#include <stdio.h>
#include <stdlib.h>
typedef struct douline{	int date;struct douline*prior,*next; }douline;//prior(ÏÈÇ°µÄ£©00
douline * found();
void printline(douline *head);
	
main()
{	
	douline* head1=found();
	printf(head1);//1 3 5 7 9 2 4 6 8 0
	return 0;
}
douline* found()
{	
	douline*head=(douline*)malloc(sizeof(douline));
	scanf("%d",&head->date);
	douline*p1,*p2,*p3,*p4;
	p1=p2=head;
	while(p2->date){
		p2=(douline*)malloc(sizeof(douline));
		scanf("%d",&p2->date);
		p1->next=p2;
		p2->prior=p1;
		p1=p2;
	}
	p1->next=NULL; 
	return head;
}
void printline(douline* head)
{	
	douline *p1,*p2;
	p1=head;
	while(p1!=NULL){
		printf("%d",p1->date);
		p1=p1->next;
	}
}
