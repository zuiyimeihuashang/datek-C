  /* ��A(A<=6) ���Ǵ�A��ʼ��4������˳�����eg(A=2):234 235 243 245
  												  324 325 342 345
  												  423
  												  523 */            
#include <stdio.h>             
int main()
{	int a,i,j,k;
	int cnt=0;
	printf("������һ������:");
	scanf("%d",&a);
	i=a;   
	while(i<a+4){
		j=a;
			while(j<a+4){
				k=a;
				while(k<a+4){
					if(i!=j&&i!=k&&j!=k){
						cnt++;
						printf("%d%d%d",i,j,k);
						if(cnt==6){
							printf("\n");
							cnt=0;
						}else{
							printf(" ");
						}
					}
					k++;
				}
				j++;
			}
		i++;   	
	}
	return 0;
 } 
