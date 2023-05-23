#include <stdio.h>
#include <stdbool.h>

main()
{
	printf ("sizeof int=%ld\n",sizeof(int));
	printf ("sizeof short=%ld\n",sizeof(short));
	printf ("sizeof long=%ld\n",sizeof(long));
	printf ("sizeof long long=%ld\n",sizeof(long long));
	printf ("sizeof char=%ld\n",sizeof(char));
	printf ("sizeof bool=%ld\n",sizeof(bool));
	printf ("sizeof *p=%d\n",sizeof(*p));
	
	return 0;	
 } 
