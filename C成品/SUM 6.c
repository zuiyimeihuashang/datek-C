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
		printf("����������%d\n",x);
		status=scanf("%d",&x);
		printf("������%d\n",sum);
	}
		average =sum/i;
		printf("���ֵĺ���%d,ƽ��ֵ��%f\n",sum,average);
	return 0;
}
