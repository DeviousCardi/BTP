#include <stdio.h>
int main() {
	int a,b,c;
	int sum,prod;
	float avg;
	scanf("%d %d %d",&a,&b,&c);
	sum = a+b+c;
	prod = a*b*c;
	avg = (a+b+c)/3;
	printf("%d",sum);
	printf("%d",prod);
	printf("%f",avg);
	return 0; }