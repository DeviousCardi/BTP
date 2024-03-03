#include <stdio.h>
int main() {
	float a, b, c, avg;
	int sum, prod;
	scanf("%f %f %f", &a, &b, &c);
	sum = (int)(a + b +c);
	prod = (int)a*b*c;
	avg = (a + b + c)/3.0;
	printf("%d\n", sum);
	printf("%d\n", prod);
	printf("%.3f", avg);
	return 0; }