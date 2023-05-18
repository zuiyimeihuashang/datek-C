#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 const char y[]= "section";
 const char e[]="subsection" ;
 const char s[]= "subsubsection";

main()
{	
	typedef struct zfc{
		char b[20];
		int Cnt1,Cnt2,Cnt3;
	}zfc;
	char a[14]={'\0'},b[20]={'\0'},i;
	int cnt1=0,cnt2=0,cnt3=0,eg;
	scanf("%d",&eg);
	zfc*zfcshuzu=(zfc*)malloc(eg*sizeof(zfc));
	for(i=0;i<eg;i++){
		scanf("%s %s",a,zfcshuzu[i].b);
		if(strcmp(a,y)==0){
			cnt1++,cnt2=0,cnt3=0; 
		};
		if(strcmp(a,e)==0){
			cnt2++,cnt3=0;
		};
		if(strcmp(a,s)==0)cnt3++;	
		zfcshuzu[i].Cnt3=cnt3;zfcshuzu[i].Cnt2=cnt2;zfcshuzu[i].Cnt1=cnt1;	
	}
	for(i=0;i<eg;i++){
		if(zfcshuzu[i].Cnt3){
		printf("%d.%d.%d %s",zfcshuzu[i].Cnt1,zfcshuzu[i].Cnt2,zfcshuzu[i].Cnt3,zfcshuzu[i].b);	
		}else if(zfcshuzu[i].Cnt2){
	    printf("%d.%d %s",zfcshuzu[i].Cnt1,zfcshuzu[i].Cnt2,zfcshuzu[i].b);		
		}else{
		printf("%d %s",zfcshuzu[i].Cnt1,zfcshuzu[i].b);	
		}
		printf("\n");
	}
	free(zfcshuzu); 
	return 0;
}
