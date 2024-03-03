#include <stdio.h>
int main() {
	int a;
	int b;
	int c;
	int sum;
	int product;
	float average;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	sum = a+b+c;
	product = a*b*c;
	average = (a+b+c)/3;{
	printf("sum is %d\n",a+b+c);}
   {	printf("product is %d\n",a*b*c);}
   { printf("average is %.3f",(a+b+c)/3);}
	return 0; }