#include <stdio.h>
int main() {
	int a,b,c,sum = 0,product = 0;
	float average;
	scanf("%d %d %d",&a,&b,&c);
	sum = a+b+c;
	product = a*b*c;
	average = (a+b+c)/3.0;
	printf("%d", sum);
	printf("%d", product);
	printf("%f", average);
	return 0; }