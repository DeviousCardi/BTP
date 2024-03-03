#include <stdio.h>
int main() {
	int a,b,c,p,d;
	float avg;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	p=a*b*c;
	d=a+b+c;
	avg=(a+b+c)/3.0;
	printf("%d\n",d);
	printf("%d\n",p);
	printf("%.3f",avg);
	return 0; }