#include <stdio.h>

void sort(int sort_a[],int sort_len);
void swap(int *a,int *b) ;
main()
{	int i=0,j=0,k=7,c=0;
	int number[k];//9 1 2 3 10 8 7 6 4 5 
	for(i=0;i<k;i++){
		scanf("%d",&number[i]);//printf("%d ",number[i]);
	} 
	sort(number,7);
	for(i=0;i<7;i++){
		printf("%d ",number[i]);
	}
//	printf("$%c$",number[1]);
	return 0;
}	
void sort(int sort_a[],int sort_len)
{//9123087645 
	int i,j,k;
	k=sort_len;//字符数组最后一个是/0不参与排序 
	for(j=0;j<sort_len;j++){
		for(i=0;i<k-1;i++){
		if(sort_a[i]>=sort_a[i+1]){
		swap(&sort_a[i],&sort_a[i+1]);
			}			
	}
	k--;
	}
	
}
 void swap(int *a,int *b) 
{
	int c = 0;
	c = *b;
	*b = *a;
	*a = c;
}
