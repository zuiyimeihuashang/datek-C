#include <stdio.h>

int pd(int e,int a[3][3]);
int i,j,singer1=8,singer2=9,singer0=1;
main()
{	int a[3][3]={{0}},num=0,N=100000000;
	scanf("%d",&num);
	for(i=0;i<9;i++){
		if(num/N!=0){
			int e1,a2;
			if(((num/N)/3)==0||(((num/N)/3)==1&&((num/N)%3)==0)){
				e1=0;
			}else if(((num/N)/3)==1||(((num/N)/3)==2&&((num/N)%3)==0)){
				e1=1;
			}else {
				e1=2;
			}
			a2=(num/N)-3*e1-1;
			if(singer0==1){
				a[e1][a2]=singer1;//5237649//123456897//539128647
			}else{
				a[e1][a2]=singer2;
			}
			singer0*=-1;
		}
		num%=N;N/=10;	
	}
	singer1=pd(singer1,a);printf("%d",singer1);
	singer2=pd(singer2,a);printf("%d",singer2);
	if(singer1!=0||singer2!=0){
		if(singer1){
			printf("xiaoa wins.");
		}else{
			printf("uim wins.");
		}
	}else{
		printf("drew.");
	}
	return 0;
}
int pd(int e,int a[3][3]) 
{
	int singer=0,cnt=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]==e){
				cnt++;
			}
		}
		if(cnt==3){
			singer=1;break;
		}
		cnt=0;
	}
	for(j=0;j<3;j++){
		for(i=0;i<3;i++){
			if(a[i][j]==e){
				cnt++;
			}
		}
		if(cnt==3){
			singer=1;break;
		}
		cnt=0;
	}
	if(a[0][0]==e&&a[1][1]==e&&a[2][2]==e)singer=1;
	if(a[2][0]==e&&a[1][1]==e&&a[0][2]==e)singer=1;
	return singer;
}
