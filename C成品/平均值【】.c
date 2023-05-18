#include <stdio.h>

int main()
{
	int i,ii,wc;
	int number[100];
	int x,cou;
	double sum=0.0;
	double average=0.0;
	
	for(i=1;i<100;i++){
		number[cou]=0;
	} 
	scanf("%d",&x);
	while(x!=-1){
		number[wc]=x;
		sum +=x;
		wc++;
		ii++;
		scanf("%d",&x);
	//	printf("%d,%d,%f",ii,number[wc],sum);
	}
	average = sum/ii;
	
	
   printf("%f\n",average);
   return 0;
}
