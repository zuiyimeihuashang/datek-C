#include <stdio.h>
main()
{
	int x,i;
	int status=0;
	int sum;
	double average;
	status=scanf("%d",&x);
	while(status!=0){
		sum +=x;
		i++;
		printf("请输入数字%d\n",x);
		status=scanf("%d",&x);
		printf("数字是%d\n",sum);
	}
		average =sum/i;
		printf("数字的和是%d,平均值是%f\n",sum,average);
	return 0;
}
