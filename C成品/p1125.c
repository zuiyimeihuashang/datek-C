#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 100
int prime(int p) ;

int main()//beijing NO  ubuntuubuntuubuntuubuntuubuntuu Luck 11 
{
	int i,j,len,minn,maxn;
	char a[MAX];
	scanf("%s",a);
	len=strlen(a);int b[len];
	for(i=0;i<len;i++){
		for(j=0,b[i]=0;j<len;j++){
			if(a[i]==a[j]){
				b[i]=b[i]+1;
			}
		}
		if(i==1){
			minn=b[i];maxn=b[i];
		}
		minn=minn<b[i]?minn:b[i];
		maxn=maxn>b[i]?maxn:b[i];
	}
	i=maxn-minn;//printf("%d\n",i);
	if(prime(i)==1){
		printf("Lucky Word\n");
		printf("%d",i);
	}else{
		printf("No Answer\n");
		printf("0");
	}
	return 0;
}
int prime(int p) {//�����ж������ĺ��� 
	int i = 0, singer = 1;//�������������� 
	double b = sqrt(p);//������һ��double���� 

	if (p==2||p==3) {//�����2,3�������� 
		singer = 1;//singerΪ1 
	} else if (p % 6 != 1 && p % 6 != 5) {//�������6X�ĸ��� 
		singer = 0;//һ���������� 
	} else if (p > 0) {//��֤����0 
		for (i = 2; i <= b; i++) {//��2��ʼ���� 
			if (p % i == 0) {//��������� 
				singer = 0;//singerΪ1 
			}
		}
	}
	if(p==1)singer=0;

	return singer;//����singer��ֵ 
}
