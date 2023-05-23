# include <stdio.h>
int main() 
{
	int x;
	int sate;
	int sum;
//	double average;
	
	printf("请输入数字,输入字母表示结束：");
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
