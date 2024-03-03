#include <stdio.h>
int main() {
     float a,b,c,s,p;
     float avg;
     scanf("%f", &a);
     scanf("%f", &b);
     scanf("%f", &c);
     s=a+b+c;
     p=a*b*c;
     avg=s/3;
     printf("%d\n", (int)s);
     printf("%d\n", (int)p);
     printf("%.3f", avg);
	return 0; }