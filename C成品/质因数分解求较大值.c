#include <stdio.h>
#include <math.h>

int prime(int*);    

main()
{	
	int i=0,max=0,a=0,cnt=0,j=0,c=0;
	scanf("%d",&a);
	double k =0.0;
	k=sqrt(a*1.0); 
	for(i=2;i<k&&max==0;i++){
		if(prime(&i)==1 ){
			if(a%i==0){
			max=a/i;
			cnt++;

		}
	}
	}
 	printf("%d",max);
	return 0;

}
int prime(int *p)
{
	int i=0,cnt=1;
	double b=sqrt(*p);
	if(*p==3||*p==2){
		cnt=1;}
	else if(*p%6!=1&&*p%6!=5){
			cnt=0;
	}else if(*p>0){
		for(i=2;i<=b;i++){
			if(*p%i==0){
				cnt=0;
			}
		}
	}

	return cnt;
}
