#include <stdio.h>
int main()
{	
	int x;
	printf("���������ֵĸ�����");
	scanf("%d",&x); 
	double number[x];
	
	double sum=0.0;
	double average=0.0;
	int i=0;
	double m=0.0;
//	int s;
	
	printf("����������:");
//	scanf("%f",&m);
//	printf("hi\n");
	
	while(i<x){
		number[x] =m;
		sum +=m;
		i++;
		scanf("%f",m);
	//	printf("%d" "%f" "%d",i,m,s);
			  }
			  
	average = sum/x;
	printf("%d\n",average);

   return 0;
}
