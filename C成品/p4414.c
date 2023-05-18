#include <stdio.h>
 void swap(int *a,int *b);
//1 5 3  ABC
int main()
{
	int a[3]={0},i; 
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1])swap(&a[0],&a[1]);
	if(a[0]>a[2])swap(&a[0],&a[2]);
	if(a[1]>a[2])swap(&a[1],&a[2]);
	char c='\0',str1[5]={'\0'};
	scanf("%s",str1);
	printf("%d %d %d",a[str1[0]-'A'],a[str1[1]-'A'],a[str1[2]-'A']);
	return 0;
 } 
 void swap(int *a,int *b)
{
	int e = 0;
	e = *a;
	*a = *b;
	*b = e;
}
