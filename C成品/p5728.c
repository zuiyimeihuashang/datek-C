#include <stdio.h>//头文件 

typedef struct{//定义并重命名了一个结构体变量 
	int a,b,c,sum;//含有四个变量 
}cj;
int main()//主函数入口 
{
	int i,n,cnt=0,j,singer=1;//定义了四个变量 
	scanf("%d",&n);//读入N的值 
	cj student[n];//定义了一个结构体数组 
	for(i=0;i<n;i++){//历遍数组 
		scanf("%d %d %d",&student[i].a,&student[i].b,&student[i].c);//输入学生信息 
		student[i].sum=student[i].a+student[i].b+student[i].c;//计算总成绩 
	}
	for(i=0;i<n-1;i++){//历遍数组 
		for(j=i+1;j<n;j++){//历遍数组 
			if(student[i].a-student[j].a>5||student[i].b-student[j].b>5)singer=0;//分差大于5，singer=0 
			if(student[i].c-student[j].c>5||student[i].sum-student[j].sum>10)singer=0;//分差大于5，singer=0 
			if(student[i].a-student[j].a<-5||student[i].b-student[j].b<-5)singer=0;//分差大于5，singer=0 
			if(student[i].c-student[j].c<-5||student[i].sum-student[j].sum<-10)singer=0;//分差大于5，singer=0 
			if(singer==1){//如果旗鼓相当 
				cnt++;//计数 
			}else{
				singer=1;//重置singer的值便于下次计算 
			}
		}
	}
	printf("%d",cnt);//输出结果 
	return 0;//主函数结束 
}
