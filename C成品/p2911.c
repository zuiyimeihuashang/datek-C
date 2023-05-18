#include <stdio.h>
#include <stdlib.h>

int main()
{
	double a,b,c;
	int max,i,j,k;
	scanf("%lf %lf %lf",&a,&b,&c);
	max=(int)(a+b+c+1);//	max=(int)(a+b+c);会导致数组越界进一步导致free函数调试时会弹出cup错误窗口 
	/*double count[max];*/double* count=(double *)malloc(max*sizeof(double));
	for(i=0;i<max;i++){
		count[i]=0;
	}
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			for(k=1;k<=c;k++){
				count[i+j+k]+=1.0/(double)a+1.0/(double)b+1.0/(double)c;
			}
		}
	}
	double min=count[3];int I=3;
	for(i=0;i<max;i++){
		if(count[i]!=0&&count[i]>min){
			min=count[i];
			I=i;
		}
	}
	free(count);
	printf("%d",I);

	return 0;
}
