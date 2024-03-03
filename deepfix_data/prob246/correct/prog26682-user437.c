#include <stdio.h>
int main() {
	int a;
	int b;
	int c;
	int sum;
	int product;
	float average;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	sum = a+b+c;
	product = a*b*c;
	average = (a+b+c)/3.0;{
	printf("sum is %d\n",sum);}
   {	printf("product is %d\n",product);}
   { printf("average is %.3f",average);}
	return 0; }