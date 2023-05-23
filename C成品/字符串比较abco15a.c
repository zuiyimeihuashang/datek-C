#include <stdio.h>// 头文件 

main() {//主函数 
	char a[50]={'\0'},b[50]={'\0'};//定义了两个数组 
	int cnt1=0,cnt2=0,i=0;//定义了三个变量CNT用来计数，i用在for中 
	scanf("%s %s", &a, &b);//读入字符串 
	for(i=0;a[i]!='\0';i++){//历遍数组并统计字符个数 
		cnt1++;//计数 
	}
		for(i=0;b[i]!='\0';i++){//同上统计b字符长度 
		cnt2++;//计数 
	}
	if (cnt1 < cnt2) {//B比A长 
		printf("%s\n", b);//输出B字符 
	} else {
		printf("%s\n", a);//输出A字符 
	}

	return 0;//函数结束 
}
