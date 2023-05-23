#include <stdio.h>

void swap(int *a,int *b); 
main()
{
	//printf("请输入欲排序的数量：");
	int dx=0,i=0,j=0,k=0,z=0,cnt=0;;
	int min;
	scanf("%d",&dx);
	int number[dx];
	for(i=0;i<dx;i++){
		scanf("%d",&number[i]);//printf("%d",number[i]);
	}
	for(i=0;i<dx;i++){ 
			min=number[i];
		for(j=i,cnt=i;j<dx;j++){
			if(min>number[j+1]){
				min=number[j+1];
				cnt=j+1;	
			}
		}
		if(number[i]!=min){//加了*的指针就是数值可以进行运算 
			z=number[i];//                                  6  2 4 3 6 5 1
			number[i]=min;
			number[cnt]=z;
		}

	}
		for(i=0;i<dx;i++){
	       printf("%d ",number[i]);
	}

	return 0;
 } 

