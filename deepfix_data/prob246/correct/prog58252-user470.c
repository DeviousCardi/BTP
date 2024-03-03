#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	int sum;
	sum=a+b+c;
	int product;
	product = a*b*c;
	float average;
	average = (a+b+c)/3.0;
	printf("sum = %d,product = %d,average = %.3f",sum,product,average);
	return 0; }