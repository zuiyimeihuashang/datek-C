#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i = 0, j = i - 1, k;
	char* a= (char*)malloc(12 * sizeof(char));
	if(a)a[0] = getchar();
	while (a[i] != '\n' && a[i] != '\r')
	{
		i++;
		a[i] = getchar();
	}
	j = i - 1;
	while (a[j + 1] == '\n' && a[j] == '0' && a[0] != '0')
	{
		a[j] = '\n';
		j--;
	}
	if (a[0] == '-')
	{
		printf("%c", a[0]);
		for (k = j; k > 0; k--)
		{
			printf("%c", a[k]);
		}
	}
	if (a[0] != '-')
	{
		for (k = j; k >= 0; k--)
		{
			printf("%c", a[k]);
		}
	}
	free(a);
	return 0;
}
