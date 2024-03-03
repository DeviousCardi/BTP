#include <stdio.h>
int main() {
int a;
int b;
int c;
scanf("%d%d%d",&a, &b ,&c);
int d;
d=a+b+c;
int e=a*b*c;
float av=(a+b+c)/3.0;
printf("%d\n",d);
printf("%d",e);
printf("%.3f",av);
	return 0; }