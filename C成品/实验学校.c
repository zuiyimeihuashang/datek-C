#include<stdio.h>
int num[100][2];
int shu[10005];
int main()
{int i,k,n,m;
scanf("%d %d",&m,&n);
for(i=0;i<n;i++)
scanf("%d %d",&num[i][0],&num[i][1]);

for(i=0;i<=m;i++)
shu[i]=1;

for(i=0;i<n;i++)
{for(k=num[i][0];k<=num[i][1];k++)
shu[k]=0;
}
int sum=0;
for(i=0;i<=m;i++)
{if(shu[i])
sum++;
}
printf("%d",sum);
}
