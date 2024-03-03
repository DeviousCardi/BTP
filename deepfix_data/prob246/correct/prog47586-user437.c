#include <stdio.h>
int main() {
	float a;
	float b;
	float c;
	int sum;
	int product;
	float average;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	sum = a+b+c;
	product = a*b*c;
	average = (a+b+c)/3;{
	printf("sum is %f\n",a+b+c);}
   {	printf("product is %f\n",a*b*c);}
   { printf("average is %.3f",(a+b+c)/3);}
	return 0; }