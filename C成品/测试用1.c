#include <stdio.h>

int main() 
{
	int a;
	scanf("%d", &a);
	if (a <= 100 && 1 <= a)
	{
		if ( a % 2 == 0) 
		{
			if (a != 2) 
			{
				printf("YES");
			}else {printf("NO");};
		}else 
		{
			printf("NO");
		}
		 
		
	}

	return 0;
}
