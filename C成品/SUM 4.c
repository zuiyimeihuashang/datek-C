# include <stdio.h>
int main() 
{
	int x;
	int sate;
	int sum;
//	double average;
	
	printf("����������,������ĸ��ʾ������");
	sate=scanf("%d",&x);
	while(sate != 0){
		sum += x;
		sate=scanf("%d",&x);
	//	printf("%f",sum); 
	}
//	average = average/10.0;
	printf("%d",sum); 
	return 0;
}
