#include  <stdio.h>

main()//���� 100%�����ݣ���֤1��1��10**4��1 ��m ��100, 0 ��u ��v ��l.
{
	int l=0,m=0;
	scanf("%d %d",&l,&m);
	int tree[10002];
	int sum=0,k=0,a=0,i=0,j=0;
		for(i=0;i<l+1;i++){
			tree[i]=1;//printf("%d",tree[i]);������ ,����Ϊ1�� 
		}
		for(a=0;a<m&&m>=1&&m<=100;a++){
		scanf("%d %d",&i,&j); 
		for(;i<=j&&j<l&&i>=0;i++){//  0 ��u ��v ��l.��֤������ѭ��ʹȥ���� 
						tree[i] = 0;
			//printf("%d\n",tree[i]);������ 
		}
		}
				
		for(k=0;k<l+1;k++){
			if(tree[k]){/*tree[i]=0���󣬾���ֻ��һ��=����������������tree==1����һ*/
				sum = sum+1;
			}
		}
			
	//500 3 150 150 100 200 470 471  10 2 1 5 6 7
	printf("%d\n",sum); 
	return 0;
}    
