#include <stdio.h>

void pintlf(*int a[]); //打印函数  
main()
{
	printf("请输入欲排序的数量：");
	int dx=0,i=0,j=0,k=0,exchanger=0,cnt=0;;
	int min;
	scanf("%d",&dx);
	int number[dx];
	for(i=0;i<dx;i++){
		scanf("%d",&number[i]);
	}
	for(i=0;i<dx;i++){
		exchanger=number[i];
		while(number[i]>number[i+1]&&(i+1)<dx)
			number[i]=number[i+1];
			number[i+1]=exchange;
	}
	
	printlf(&number[i]);
	return 0;
 } 
 
void pintlf(*int a[])
{	
	for(i=0;i<dx;i++){
       printf("%d ",number[i]);
	}
}

