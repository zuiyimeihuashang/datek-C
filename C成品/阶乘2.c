#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int m=1;
int hour=1;
while(m<=n) {
hour*=m;
m++;
}

   printf("%d\n",hour);
   return 0;
}
