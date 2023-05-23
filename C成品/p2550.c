#include <stdio.h>//头文件 
#include <string.h>//头文件 

void sort(int sort_a[],int sort_len);//排序函数声明 
void swap(int *a,int *b) ;//交换数值函数声明 
int found(int found_a[],int found_e,int * found_i,int found_len);//二分查找函数声明 
main()
{	int i=0,j=0,k=10,c,n,singer2=0,cnt1=0;//定义了7个变量 
	scanf("%d",&n);//读入N的值 
	int cnt[8]={0};//定义并初始化计算数组 
	int a[7]={0};//中奖号码数组 
	for(i=0;i<7;i++){//历遍数组 
		scanf("%d",&a[i]);//读入中奖号码 
	}
	sort(a,7);//对中奖号码排序，便于二分查找 
	for(i=0;i<n;i++){//历遍数组 
		for(j=0;j<7;j++){//历遍数组 
			scanf("%d",&c);//输入彩票号码 
			int I=0;//定义了一个变量 
			singer2=found(a,c,&I,7);//查找数字C是否中奖 
			if(singer2==1){//如果中奖 
				cnt1++;singer2=0;//计数，重置singer的值便于下次查找 
			
			}	
		}
		cnt[cnt1]++;//将一组的彩票中奖数在对应的CNT数组中计数 
		cnt1=0;//重置CNT1的值 
	}
	for(i=7;i>0;i--){//历遍数组 
		printf("%d ",cnt[i]);//输出结果 
	}
	return 0;//主函数结束 
}	
int found(int found_a[],int found_e,int * found_i,int found_len)//定义了二分查找函数 
{
	int i;//定义了变量I 
	int found_add=0,found_end=found_len,found_mid=found_len/2,found_singer=0;//定义了四个变量 
	for(i=0;i<found_len;i++){//如果不是最后一个继续查找 
		if(found_a[found_mid]==found_e){//如果中间的数等于查找的数 
			*found_i=found_mid;//将下标（位置）赋给变量found_i 
			found_singer=1;//找到了令found_singer为1 
			break;//结束查找 
		}
		if(found_a[found_mid]>found_e){//如果查找值小于中间值 
			found_end=found_mid;//改变查找范围的最大值 
			found_mid=(found_end+found_add)/2;//改变查找范围的最小值
		}else{
			found_add=found_mid;//改变查找范围的最小值
			found_mid=(found_end+found_add)/2;//改变查找范围的最大值
		}
	}	
	return found_singer;//返回查找结果，成功返回1 
}
void sort(int sort_a[],int sort_len)//定义了排序函数 
{ 
	int i,j,k;//定义了三个变量 
	k=sort_len;//将长度赋给K 
	for(j=0;j<sort_len;j++){//历遍数组 
		for(i=0;i<k-1;i++){//将第一个数移动到合适位置 
		if(sort_a[i]>=sort_a[i+1]){//如果后一个数小于前一个数 
		swap(&sort_a[i],&sort_a[i+1]);//交换两个数的数值 
		}			
	}
	k--;//最后一个数已经排好，第二次不必排序 
	}
	
}
 void swap(int *a,int *b) //定义了交换数值的函数 
{
	int c = 0;//定义了中间变量C 
	c = *b;//将B的值保存下来 
	*b = *a;//将A的值赋给B 
	*a = c;//将保存下来的B值赋给A 
}
