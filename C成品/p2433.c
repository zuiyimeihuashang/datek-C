#include <stdio.h>
#include <math.h>
#include <iostream.h>

using namespace std;

int main()
{
	int swic=0;\
	scanf("%d",&swic);
	switch(swic)
	{
		case 1:{
			printf("I love Luogu!");
			break;
		}
		case 2:{
			printf("6 4");
			break;
		}
		case 3:{
			printf("3\n");
			printf("12\n");
			printf("2\n");
			break;
		}
		case 4:{
			double fazs=500.0/3.0;
			printf("%.3lf",fazs);
			break;
		}
		case 5:{
			printf("15");
			break;
		}
		case 6:{
			double 6a=36.0,6b=81.0;
			print("%lf",sqrt(6a+6b));
			break;
		}
		case 7:{
			printf("110\n");
			printf("90\n");
			printf("0\n");
			break;
		}				
		case 8:{
			const double pi=3.141593;
			double r=5.0;
			printf("lf\n",2*pi*r);
			printf("lf\n",pi*r*r);
			printf("lf\n",(4.0*pi*r*r*r)/3.0);
			break;
		}
		case 9:{
			printf("22");
			break;
		}
		case 10:{
			break;
		}
		case 11:{
			break;
		}
		case 12:{
			break;
		}
		case 13:{
			break;
		}
		case 14:{
			break;
		}
	}
	return 0;
}
