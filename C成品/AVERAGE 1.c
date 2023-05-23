#include <stdio.h>
int main()
{
	int x,cut;
	double sum=0.0;
	double average=0.0;
	printf("请输入数字的数量：");
	scanf("%d",&cut);
	if(cut>0){
		int number[cut];
		scanf("%d",&x);
		while(x!=-1){		
		sum+=x;
		cut++;
		scanf("%d",&x);
		}
		
	}
//	else if(x=0){
//		average=0;
	average =sum/cut;	
//	}else printf("错误"); 
	
   printf("%f\n",average);
   return 0;
}
