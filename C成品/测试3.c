#include <stdio.h>
#include <math.h>

int prime(int*);

main()
{	int k=10;
	int i=0,max=0,a=0,cnt=0,j=0,c=0;
	scanf("%d",&a);
	int number[a];
	for(i=2;i<a;i++){
		if(prime(&i)==1 ){
			number[cnt]=i;
			cnt++;
		}
	}printf("%d\n",cnt);
	for(i=0;i<cnt;i++){//条件是i<cnt而不是i<=cnt是因为cnt最后的值比个数大一 
		printf("%d ",number[i]);
	}
/*	if(prime(&k)){
		printf("YES");printf("%d",k);
	}else{
		printf("NO");
	}*/
	return 0;

}
int prime(int *p)
{
	int i=0,cnt=1;
	if(*p%2==0&&*p!=2){
		cnt=0;}
		double b=sqrt(*p);
		for(i=2;i<=b;i++)
		{	if(*p%i==0)
			{
				cnt=0;
			}
		}

	return cnt;
}
