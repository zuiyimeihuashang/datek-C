#include <stdio.h>
#include <string.h>

#define MAX_DIGIT 100000 // �߾��ȼ���Ҫ��֤λ���㹻��

void multiply(char a[], int n);

int main() {
    int n,i,j;
    scanf("%d", &n);

    // ��ʼ������
    char sum[MAX_DIGIT + 1];
    memset(sum, '\0', sizeof(sum));
    sum[0] = '1'; // S=1ʱ�����
    char fact[MAX_DIGIT + 1];
    memset(fact, '\0', sizeof(fact));//memset(void *s,int ch,size_t n);(������, ��ʼֵ, �������������ֽڴ�С) 
    fact[0] = '1';

    // ����S��n
    for ( i = 1; i <= n; i++) {
        multiply(fact, i);// ����i!��ֵ
        int carry = 0; // ��λ��
        int len = strlen(sum);
        for (j = 0; j < len; j++) {
            int tmp = (sum[j] - '0') * i + carry;
            sum[j] = tmp % 10 + '0'; // ��i!��ֵ�����������sum��
            carry = tmp / 10;
        }
        // �����λ
        while (carry != 0) {
            sum[len] = carry % 10 + '0';
            len++;
            carry /= 10;
        }
    }

    // ������
    printf("n = %\n", n);
    printf("S = %s\n", sum);

    return 0;
}

// ��a����n
void multiply(char a[], int n) {
    int len = strlen(a),i;
    int carry = 0;
    for (i = 0; i < len; i++) {
        int tmp = (a[i]+'0') * n + carry;
        a[i] = tmp % 10 + '0';
        carry = tmp / 10;
    }
    // �����λ
    while (carry != 0) {
        a[len] = carry % 10 + '0';
        len++;
        carry /= 10;
    }
}
