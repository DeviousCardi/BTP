#include <stdio.h>
int main() {
     float a,b,c,s,p;
     float avg;
     scanf("%f", "%f", "%f", &a, &b, &c);
     s=a+b+c;
     p=a*b*c;
     avg=s/3;
     printf("%f\n", s);
     printf("%f\n", p);
     printf("%.3f\n", avg);
	return 0; }