# include <stdio.h>
int main() 
{
	int x;
	int i;
	int sate;
	int sum;
	int average;
	
	printf("请输入数字,输入字母表示结束：");	
	sate=scanf("%d",&x);
	while(sate!=0){
		sum+=x;
		sate =scanf("%d",&x);
		i++;
		printf("%d",sum);
	}
	average=sum/i;
	printf("%d,%d\n",sum,average);
	
	return 0;
}
