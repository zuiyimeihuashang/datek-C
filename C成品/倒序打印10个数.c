#include<stdio.h> 
int main() 
{
	int number[4];
	int i;
	int a=1;
	
	for(i=0;i<4;i++){
		number[i] = a;
		a++;
		printf("������������%d\n",number[i]);
	}
	printf("������4�����֣�");
	for(i=0;i<4;i++){
		scanf("%d",&number[i]);
		printf("������������%d\n",number[i]);
	}
		for(i=3;i>=0;i--){
			printf("������%d\n",number[i]);
		}	
	
	return 0;
}
