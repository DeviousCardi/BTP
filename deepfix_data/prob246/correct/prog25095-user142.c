#include <stdio.h>
int main() {
	int a,b,c,p,d;
	float avg;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	p=a*b*c;
	d=a+b+c;
	avg=d/3;
	printf("%d\n",p);
	printf("%d\n",d);
	printf("%f",avg);
	return 0; }