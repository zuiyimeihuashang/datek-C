#include <stdio.h>//ͷ�ļ� 
#include <string.h>//ͷ�ļ� 

void sort(int sort_a[],int sort_len);//���������� 
void swap(int *a,int *b) ;//������ֵ�������� 
int found(int found_a[],int found_e,int * found_i,int found_len);//���ֲ��Һ������� 
main()
{	int i=0,j=0,k=10,c,n,singer2=0,cnt1=0;//������7������ 
	scanf("%d",&n);//����N��ֵ 
	int cnt[8]={0};//���岢��ʼ���������� 
	int a[7]={0};//�н��������� 
	for(i=0;i<7;i++){//�������� 
		scanf("%d",&a[i]);//�����н����� 
	}
	sort(a,7);//���н��������򣬱��ڶ��ֲ��� 
	for(i=0;i<n;i++){//�������� 
		for(j=0;j<7;j++){//�������� 
			scanf("%d",&c);//�����Ʊ���� 
			int I=0;//������һ������ 
			singer2=found(a,c,&I,7);//��������C�Ƿ��н� 
			if(singer2==1){//����н� 
				cnt1++;singer2=0;//����������singer��ֵ�����´β��� 
			
			}	
		}
		cnt[cnt1]++;//��һ��Ĳ�Ʊ�н����ڶ�Ӧ��CNT�����м��� 
		cnt1=0;//����CNT1��ֵ 
	}
	for(i=7;i>0;i--){//�������� 
		printf("%d ",cnt[i]);//������ 
	}
	return 0;//���������� 
}	
int found(int found_a[],int found_e,int * found_i,int found_len)//�����˶��ֲ��Һ��� 
{
	int i;//�����˱���I 
	int found_add=0,found_end=found_len,found_mid=found_len/2,found_singer=0;//�������ĸ����� 
	for(i=0;i<found_len;i++){//����������һ���������� 
		if(found_a[found_mid]==found_e){//����м�������ڲ��ҵ��� 
			*found_i=found_mid;//���±꣨λ�ã���������found_i 
			found_singer=1;//�ҵ�����found_singerΪ1 
			break;//�������� 
		}
		if(found_a[found_mid]>found_e){//�������ֵС���м�ֵ 
			found_end=found_mid;//�ı���ҷ�Χ�����ֵ 
			found_mid=(found_end+found_add)/2;//�ı���ҷ�Χ����Сֵ
		}else{
			found_add=found_mid;//�ı���ҷ�Χ����Сֵ
			found_mid=(found_end+found_add)/2;//�ı���ҷ�Χ�����ֵ
		}
	}	
	return found_singer;//���ز��ҽ�����ɹ�����1 
}
void sort(int sort_a[],int sort_len)//������������ 
{ 
	int i,j,k;//�������������� 
	k=sort_len;//�����ȸ���K 
	for(j=0;j<sort_len;j++){//�������� 
		for(i=0;i<k-1;i++){//����һ�����ƶ�������λ�� 
		if(sort_a[i]>=sort_a[i+1]){//�����һ����С��ǰһ���� 
		swap(&sort_a[i],&sort_a[i+1]);//��������������ֵ 
		}			
	}
	k--;//���һ�����Ѿ��źã��ڶ��β������� 
	}
	
}
 void swap(int *a,int *b) //�����˽�����ֵ�ĺ��� 
{
	int c = 0;//�������м����C 
	c = *b;//��B��ֵ�������� 
	*b = *a;//��A��ֵ����B 
	*a = c;//������������Bֵ����A 
}
