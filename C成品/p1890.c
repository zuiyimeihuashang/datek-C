#include <stdio.h>

main()
{
	char str1[6]={'\0'},str2[6]={'\0'};//[Error] invalid initializer(无效的初始化，str2[6]='\0'） 
	scanf("%s %s",str1,str2);
	int i,c=1,d=1;
	for(i=0;i<6;i++){
		if(str1[i]) c *= (str1[i]-64);
		if(str2[i]) d *= (str2[i]-64);
	}//printf("%d %d",c,d); 
	if((c%47)==(d%47)){
		printf("GO");
	}else{
		printf("STAY");//COMETQ HVNGAT 73 72
	}
	return 0;
 } 
