#include <stdio.h>//当乘法前进两位时错误 
#include <string.h>
#define zero 48

void add(char* c, char* sum);//两个数相加，结果保存在后一个数中 
void chengfa(char a[100], char b[100]);//两个数相乘，结果保存在后一个数中 
//[Error] expected '=', ',', ';', 'asm' or '__attribute__' before '{' token(void add(char* c,char *sum))
int main()
{
	int n, i, j;//const char*可接受char*型的变量，反之不行。 
	char sum[100] = { '\0' }, a[100] = { '\0' }, e[100] = { '\0' }; a[0] = '1';
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		if (i / 10 > 0) {
			e[0] = (char)(i / 10 + zero);
			e[1] = (char)(i % 10 + zero);
		}
		else {
			e[0] = (char)(i % 10 + zero);
		}
		chengfa(e, a);	printf("%d的阶乘：%s\n", i, a);
		//strcpy(a,e);
		add(a, sum);		printf("阶乘的和：%s\n", sum);
	}
	//	printf("%s",sum);
	return 0;
}
void chengfa(char a[100], char b[100])
{
	int cf_lena = strlen(a), cf_lenb = strlen(b), cf_i, cf_j, cf_l;
	int cf_e = 0, cf_F = 0, cf_k = 0, cf_lencin = 0;
	char cf_kong[100] = { '\0' }, cf_c[100] = { '\0' }, cf_sum[100] = { '\0' }, cf_d[100] = { '\0' };
	for (cf_i = cf_lenb - 1, cf_l = 0; cf_i >= 0; cf_i--, cf_l++) {
		//const char* pkong=(const char*)kong;
		if (b[cf_i] == 0) {
			b[cf_i] = zero;
		}
		for (cf_j = cf_lena - 1; cf_j >= 0; cf_j--) {
			//			int cf_e=0,cf_F=0; 
			if (a[cf_j] == 0)a[cf_j] = zero;
			cf_e = (b[cf_i] - zero) * (a[cf_j] - zero) + cf_F;
			cf_c[cf_j] = cf_e % 10 + zero;
			cf_F = cf_e / 10;
		}
		int cf_ij;
		while (cf_F != 0) {
			cf_ij = strlen(cf_c);
			for (cf_k = cf_ij; cf_k >= 0; cf_k--) {
				cf_c[cf_ij] = cf_c[cf_ij - 1];
			}
			cf_c[0] = cf_F % 10 + zero;
			cf_F /= 10;
			cf_ij++;
		}
		cf_F = 0;
		cf_lencin = strlen(cf_c);
		for (cf_k = 0; cf_k < cf_l; cf_k++, cf_j++) {
			cf_c[cf_lencin + cf_k] = zero;
		}
		add(cf_c, cf_sum);//add((const char*)c,(const char*)sum);//[Error] too few arguments to function 'add'缺少 len参数 
		//strcpy(cf_c,cf_kong);清除不完全，只去除了第一位
		for (cf_k = 0; cf_k < cf_lencin; cf_k++) {
			cf_c[cf_k] = '\0';
		}
	}
	strcpy(b, cf_sum);

}
void add(char* c, char* sum)
{
	int add_i, add_j, i1 = 0, add_ka = 0, lencadd = strlen(c), lensumadd = strlen(sum), add_len;
	char add_d[100] = { '\0' }, add_e[100] = { '\0' };
	add_len = lencadd > lensumadd ? lencadd : lensumadd;
	for (i1 = add_len - 1, add_i = lencadd - 1, add_j = lensumadd - 1; i1 >= 0; i1--, add_i--, add_j--) {
		if (add_i < 0 || add_j < 0) {
			if (add_i < 0) {
				add_d[i1] = (sum[add_j] - zero + add_ka) % 10 + zero;
				add_ka = (sum[add_j] - zero) / 10;
			}
			else {
				add_d[i1] = (c[add_i] - zero + add_ka) % 10 + zero;
				add_ka = (c[add_i] - zero) / 10;
			}
		}
		else {
			add_d[i1] = (c[add_i] + sum[add_j] - 2 * zero + add_ka) % 10 + zero;//字符0与'\0'是不一样的 
			add_ka = (c[add_i] + sum[add_j] - 2 * zero) / 10;//printf("%c",d[i])
		}

		//d[i]=(c[i]+sum[i]-2*zero+ka)%10+zero;//字符0与'\0'是不一样的 
		//ka=(c[i]+sum[i]-2*zero)/10;//printf("%c",d[i]);
	}
	if (add_ka > 0) {
		add_e[0] = add_ka + zero;
		for (add_i = 1; c[add_i - 1] != '\0'; add_i++) {
			add_e[add_i] = add_d[add_i - 1];
		}
		strcpy(sum, add_e);
	}
	else {
		strcpy(sum, add_d);
	}

}