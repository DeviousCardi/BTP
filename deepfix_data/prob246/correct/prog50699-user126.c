#include <stdio.h>
int main() {
	int a,b,c,sum,product;
	float avg;
	a=1;
	b=2;
	c=4;
	sum=a+b+c;
	product=a*b*c;
	avg=(a+b+c)/3.0;
	printf("%d\n%d\n%.3f",sum,product,avg);
	return 0; }