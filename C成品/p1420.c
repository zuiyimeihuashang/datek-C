#include <stdio.h>

int main()//10 1 5 6 2 3 4 5 6 8 9
{
	int n,i,cnt1=1,cnt2=1;
	long int a,b,c;
	scanf("%d %ld",&n,&a);
	for(i=1;i<n;i++){
		scanf("%ld",&b);
		if(b==(a+1)){
			cnt1++;
			a=b;
		}else{
			cnt2=cnt1>cnt2?cnt1:cnt2;
			cnt1=1;
			a=b;
		}
	}
	cnt2=cnt1>cnt2?cnt1:cnt2;//û�к�ȫ�����ŵľʹ����� 
	printf("%d",cnt2);
	return 0;
}
