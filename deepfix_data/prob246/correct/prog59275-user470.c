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
	printf(" %d\n%d\n,%.3f\n",sum,product,average);
	return 0; }