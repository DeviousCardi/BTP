#include <stdio.h>
int main() {
	int num1,num2,num3;
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	int sum, prod;
	float avg;
	sum = num1 + num2 + num3;
	prod = num1*num2*num3;
	avg = (float)sum/3;
	printf("%d", sum);
	printf("%d", prod);
	printf("%.3f", avg);
	return 0; }