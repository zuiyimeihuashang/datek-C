#include <stdio.h>//头文件 

main() {//主函数 
	int number[5] = {0};//定义并初始化数组 
	int i = 0, sum = 0;//I用在for中，sum用来统计吃掉的糖果 

	for (i = 0; i < 5; i++) {//写入初始糖果数 
		scanf("%d", &number[i]);//依次赋给数组 
	}//8 9 10 11 12测试用 

	for (i = 0; i < 5; i++) {//依次让数组中的元素参与计算 
		sum += number[i] % 3;//第i个人吃掉的糖果 
		if(i!=4){//特判 
			number[i+1] = number[i+1]+number[i] / 3;}//最后一个的特殊处理 
		else {//正常情况 
			number[0] += number[i] / 3;}//一般处理 
		if(i!=0){//正常情况 
			number[i-1] += number[i] / 3;}//一般处理
		else{//特殊情况 
			number[4] += number[i] / 3;}//i=0的特殊处理 ，因是圆桌围坐 
		number[i] = number[i] / 3;	//i=0的特殊处理 ，因是第一个要避免数组越界	
		
	}

	for (i = 0; i < 5; i++) {//历遍数组 
		printf("%d ", number[i]);//输出剩余在每个人手中的糖果数 

		if (i == 4) {//到数组的最后一个元素 
			printf("\n");//换行 
		}

	}
	printf("%d ", sum);//输出吃掉的糖果数 

	return 0;//主函数结束 
}
