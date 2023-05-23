#include <stdio.h>
#include <stdlib.h>

int n=0;
struct linenode 
{
	int date;
	struct linenode *next;
};
struct linenode *found();
void printline(struct linenode *head);

main()
{
	int uu=0;
	struct linenode *head1=found();
	printf("%p\n",head1);
	printline(head1);
	return 0;
}
struct linenode * found()
{
	struct linenode *p1,*p2;
	struct linenode *head=NULL;printf("%p\n",head);
	p1=p2=(struct linenode*)malloc(sizeof(struct linenode));
	scanf("%d",&p1->date);
	while(p1->date!=0){
		printf("%p\n",p1);
		n+=1;
		if(n==1){
			head=p1;
		}else{
			p2->next=p1;
		}
		p2=p1;
		p1=(struct linenode*)malloc(sizeof(struct linenode));
		scanf("%d",&p1->date);	
	}
	p2->next=NULL;
	printf("%p\n",head);
	return head;
}
void printline(struct linenode *head)
{	
	struct linenode*p1,*p2;
	p1=head;
	while(p1!=NULL){
		printf("%d",p1->date);
		p1=p1->next;
	}
}
