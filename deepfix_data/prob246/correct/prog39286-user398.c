#include <stdio.h>
int main() {
	int a,b,c;
	int sum,prod;
	float avg;
	scanf("%d %d %d",&a,&b,&c);
	sum = a+b+c;
	prod = a*b*c;
	avg = (a+b+c)/3;
	printf("%d\n",sum);
	printf("%d\n",prod);
	printf("%f\n",avg);
	return 0; }