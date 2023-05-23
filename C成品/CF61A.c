#include <stdio.h>
int fejz(int a);
int ejz(int c);
main() {	
int a, b, c = 0,d=0, k;	
scanf("%d %d", &a,&b);
	a= fejz(a);	
 b= fejz(b);	
	c=a^b;
c=ejz(c);
printf ("%d",c);
 
    return 0;
}
int fejz(int a)
 {	int e = 0, j = 1;
    	while (a != 0) {
        		e += (a % 10) * j;		
            j *= 2;
            		a /= 10;	
   }	return e;}
int ejz(int c) {
	int a = 0, j = 1, d[100] = {0}, i = 0, sum = 0;
	   while (c != 0) {		
    d[i] = c % 2;		
    c /= 2;		i++;	}
    	for (a = i-1; a >=0; a--) {
    		sum += d[a] * j;
    		j *= 10;	}	
    return sum;
    }
