#include <stdio.h>

int main()
{   
        printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ�磬"
                "������\5 7\"��ʾ5Ӣ��7Ӣ��:");
                
        double foot;
		double inch;
		
		scanf("%if %if",&foot,&inch);
		
		printf("�����%f�ס�\n",
		       ((foot+inch/12)*0.348));
			   
			   return 0;      
}
