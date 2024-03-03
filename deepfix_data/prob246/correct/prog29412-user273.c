#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int sum;
	sum=a+b+c;
	int product;
	product=a*b*c;
	float average;
	average=(a+b+c)/3;
	printf("%d\n%d\n%f",sum,product,average);
	return 0; }