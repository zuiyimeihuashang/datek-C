#include <stdio.h>

int factorial(int n);
main()
{	int n=0,a;
	scanf("%d",&n);//scanf("%d",n);
	a=factorial(n);
	printf("%d",a);
	return 0;
}
int factorial(int n)
{
	if(n-1){
	return n*factorial(n-1);//	retuern (n*factorial(n-1));[Error] ld returned 1 exit status
	}else return 1;//                 							undefined reference to `retuern'

}
