#include <stdio.h>

main()
{
	int a,i;
	scanf("%d",&a);
	double b,sum=0,c;
	for(i=0;i<a;i++){
		scanf("%lf %lf",&b,&c);
		sum+=b*c;
	}
	a=(int)(sum*8.5);
	sum=(float)a/10;
	printf("%.1lf",sum);
	return 0;
}
