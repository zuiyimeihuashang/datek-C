#include<stdio.h> 
int main() 
{
	int number[4];
	int i;
	int a=1;
	
	for(i=0;i<4;i++){
		number[i] = a;
		a++;
		printf("数组中数字是%d\n",number[i]);
	}
	printf("请输入4个数字：");
	for(i=0;i<4;i++){
		scanf("%d",&number[i]);
		printf("数组中数字是%d\n",number[i]);
	}
		for(i=3;i>=0;i--){
			printf("数字是%d\n",number[i]);
		}	
	
	return 0;
}
