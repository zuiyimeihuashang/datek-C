#include <stdio.h>

main()
{
	char a='\0';
	int b=0;
	a=getchar();printf("%c\n",a);
	while(a!='\n'){
		if(a==' ')b++;
		a=getchar();printf("%c\n",a);
	}
	printf("%d",b); 
	return 0;
 } //sfdsf  fdf fd f4f
