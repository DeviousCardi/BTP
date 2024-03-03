#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int sum, pro;
	sum=a+b+c;
	pro=a*b*c;
	float avg;
	avg= ((float)sum)/3;
	printf("%d \n %d \n %.3f", sum, pro, avg);
	return 0; }