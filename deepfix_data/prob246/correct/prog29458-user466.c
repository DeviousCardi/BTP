#include <stdio.h>
int main() {
	int sum,product,a,b,c;
	float avg;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	sum=a+b+c;
	product=a*b*c;
	avg=sum/3;
	printf("%d",sum);
	printf("\n%d",product);
	printf("\n%.3f",avg);
	return 0; }