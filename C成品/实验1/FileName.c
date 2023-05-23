#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0, j = i - 1, k;
	char a[14] = { '\0' };
	a[0] = getchar();
	while (a[i] != '\n' || i == 0)
	{
		i++;
		a[i] = getchar();
	}a[i] = '\0';
	j = i - 1;
	while (a[j + 1] == '\0' && a[j] == '0' && a[0] != '0')
	{
		a[j] = '\0';
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
	return 0;
}