#include <stdio.h>

typedef struct{
	int a,b,c,sum;
}cj;
int main()
/*3
90 90 90
85 95 90
80 100 91*/
{
	int i,n,cnt=0,j,singer=1;
	scanf("%d",&n);
	cj student[n];
	for(i=0;i<n;i++){
		scanf("%d %d %d",&student[i].a,&student[i].b,&student[i].c);
		student[i].sum=student[i].a+student[i].b+student[i].c;
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			//if(i==j)continue;
			if(student[i].a-student[j].a>5||student[i].b-student[j].b>5)singer=0;
			if(student[i].c-student[j].c>5||student[i].sum-student[j].sum>10)singer=0;
			if(student[i].a-student[j].a<-5||student[i].b-student[j].b<-5)singer=0;
			if(student[i].c-student[j].c<-5||student[i].sum-student[j].sum<-10)singer=0;
			if(singer==1){
				cnt++;
			}else{
				singer=1;
			}
		}
	}
	printf("%d",cnt);
	return 0;
}
