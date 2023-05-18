#include <stdio.h>
#define n 0.98

int main()
{
	double s,s1=2.0,cnt=1.0,v=2.0;
	scanf("%lf",&s);
	while(s1<s){
		cnt++;
		v=n*v;
		s1+=v;
	}
	printf("%.0lf",cnt);
	return 0;
}
