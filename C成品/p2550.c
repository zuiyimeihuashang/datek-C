#include <stdio.h>
#include <string.h>

void sort(int sort_a[],int sort_len);
void swap(int *a,int *b) ;
int found(int found_a[],int found_e,int * found_i,int found_len);
main()
{	int i=0,j=0,k=10,c,n,singer2=0,cnt1=0;
	scanf("%d",&n);
	int cnt[8]={0};
	int a[7]={0};
//		getchar();
	for(i=0;i<7;i++){
		scanf("%d",&a[i]);
	}
	sort(a,7);

/*2
23 31 1 14 19 17 18
12 8 9 23 1 16 7
11 7 10 21 2 9 31*/
	for(i=0;i<n;i++){
		for(j=0;j<7;j++){//a[0] a[1] a[2] a[3] a[4] a[5] a[6] a[7]
			scanf("%d",&c);
			int I=0;
			singer2=found(a,c,&I,7);
			if(singer2==1){
				cnt1++;singer2=0;
			
			}	
		}
		cnt[cnt1]++;
		cnt1=0;
	}
	for(i=7;i>0;i--){
		printf("%d ",cnt[i]);
	}
	return 0;
}	
int found(int found_a[],int found_e,int * found_i,int found_len)
{
	int i;
	int found_add=0,found_end=found_len,found_mid=found_len/2,found_singer=0;
	for(i=0;i<found_len;i++){
		if(found_a[found_mid]==found_e){
			*found_i=found_mid;
			found_singer=1;
			break;
		}
		if(found_a[found_mid]>found_e){
			found_end=found_mid;
			found_mid=(found_end+found_add)/2;
		}else{
			found_add=found_mid;
			found_mid=(found_end+found_add)/2;
		}
	}	
	return found_singer;
}
void sort(int sort_a[],int sort_len)
{//9123087645 
	int i,j,k;
	k=sort_len;//字符数组最后一个是/0不参与排序 
	for(j=0;j<sort_len;j++){
		for(i=0;i<k-1;i++){
		if(sort_a[i]>=sort_a[i+1]){
		swap(&sort_a[i],&sort_a[i+1]);
			}			
	}
	k--;
	}
	
}
 void swap(int *a,int *b) 
{
	int c = 0;
	c = *b;
	*b = *a;
	*a = c;
}
