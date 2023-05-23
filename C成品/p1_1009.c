#include <stdio.h>
#include <string.h>

#define MAX_DIGIT 100000 // 高精度计算要保证位数足够大

void multiply(char a[], int n);

int main() {
    int n,i,j;
    scanf("%d", &n);

    // 初始化数组
    char sum[MAX_DIGIT + 1];
    memset(sum, '\0', sizeof(sum));
    sum[0] = '1'; // S=1时的情况
    char fact[MAX_DIGIT + 1];
    memset(fact, '\0', sizeof(fact));//memset(void *s,int ch,size_t n);(数组名, 初始值, 数组数×类型字节大小) 
    fact[0] = '1';

    // 计算S和n
    for ( i = 1; i <= n; i++) {
        multiply(fact, i);// 计算i!的值
        int carry = 0; // 进位数
        int len = strlen(sum);
        for (j = 0; j < len; j++) {
            int tmp = (sum[j] - '0') * i + carry;
            sum[j] = tmp % 10 + '0'; // 计i!的值并将结果存入sum中
            carry = tmp / 10;
        }
        // 处理进位
        while (carry != 0) {
            sum[len] = carry % 10 + '0';
            len++;
            carry /= 10;
        }
    }

    // 输出结果
    printf("n = %\n", n);
    printf("S = %s\n", sum);

    return 0;
}

// 将a乘上n
void multiply(char a[], int n) {
    int len = strlen(a),i;
    int carry = 0;
    for (i = 0; i < len; i++) {
        int tmp = (a[i]+'0') * n + carry;
        a[i] = tmp % 10 + '0';
        carry = tmp / 10;
    }
    // 处理进位
    while (carry != 0) {
        a[len] = carry % 10 + '0';
        len++;
        carry /= 10;
    }
}
