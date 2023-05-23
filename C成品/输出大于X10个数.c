#include <stdio.h>

int main()
{
	int i=0;
	int number=0;
	int sate=0;
	
	printf("please enter a figures£º") ;
	sate=scanf("%d",&number);
	if(sate==1){
	i=number+10;
	while(number<=i){
		printf("%d\t",number);	
		number++;
	}
   printf("\n");
}	else {printf("please ensure enter a figures") ;
	
}
   return 0;
}
