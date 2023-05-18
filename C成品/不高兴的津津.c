#include <stdio.h>

main() {
	int i = 0, week[7] = {0}, a[14] = {0},j=0,jieguo=0;//5 3 6 2 7 2 5 3 5 4 0 4 0 6
	for (j = 0,i=0; j< 7; j++) {//5 3 6 2 7 1 5 3 4 4 0 4 0 6
		scanf("%d %d",&a[i],&a[i+1]);
		week[j]=a[i]+a[i+1];
		i+=2;
	}
	
	for (i = 0,j=0; i < 7; i++) {
		if (week[i] > 8 && week[i] > j) {
			jieguo = i+1;
			j= week[i];
		}
	}

	printf("%d", jieguo);
	return 0;
}
