#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d",a);
	scanf("%d",b);
	scanf("%d",c);
	int sum, prod;
	float avg;
	sum = a + b + c;
	prod = a*b*c;
	avg = (float)sum/3;
	printf("%d", sum);
	printf("%d", prod);
	printf("%.3f", avg);
	return 0; }