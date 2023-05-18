#include <stdio.h>
#include <math.h>
#include <malloc.h>//或者stdlib.h 
#define SINGER -1

main()
{	int n,i,j,c;
	scanf("%d",&n);
	double a[n];//	a =(int*)malloc(number*sizeof(int)); 
	int* linght=(int*)malloc(2000000*sizeof(int));太大了 ，用malloc 
	for(i=0;i<2000000;i++){
		linght[i]=-1;
	}
	int b[n];
	for(i=0;i<n;i++){
		scanf("%lf",&a[i]);//	printf("%d",a[i]);scanf("%f",&a[i]);
		scanf("%d",&b[i]);//	scanf("%b",&b[i]);
	}
	for(i=0;i<n;i++){//        
		for(j=1;j<=b[i];j++){//      
			c=(int)floor(j*1.0*a[i]);//     
		linght[c]=linght[c]*SINGER;//	linght[(floor(j*a[i]))]*=SINGER;
		}
	}//1 1.000000 500000
	for(i=0;i<2000000;i++){
		if(linght[i]==1){
			printf("%d ",i);
		}
	}free(linght);
	return 0;
}
