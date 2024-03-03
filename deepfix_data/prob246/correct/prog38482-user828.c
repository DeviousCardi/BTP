#include <stdio.h>
int main() {
     int a,b,c,s,p;
     float avg;
     scanf("%d", "%d", "%d", &a, &b, &c);
     s=a+b+c;
     p=a*b*c;
     avg=((float)s)/3;
     printf("%d\n", s);
     printf("%d\n", p);
     printf("%f\n", avg);
	return 0; }