#include <stdio.h>//ͷ�ļ� 
main()//��������� 
{
	char a='\0';//������һ���ַ����� 
	scanf("%c",&a);//д��a��ֵ 
	if(a>96){//��Сд�ж� 
		printf("%c",a-32);//Сת�� 
	} else {
		printf("%c",a+32);//��תС 
	}
	return 0;//���������� 
 } 
