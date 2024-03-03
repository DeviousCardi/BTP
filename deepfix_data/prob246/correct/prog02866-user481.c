#include <stdio.h>
int main() {
	int a,b,c,sum,product;
	float avg;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	sum=a+b+c;
	product=a*b*c;
	avg=(a+b+c)/3;
	printf("%d", sum);
	printf("\n%d", product);
	printf("\n%.3f", avg);
	return 0; }