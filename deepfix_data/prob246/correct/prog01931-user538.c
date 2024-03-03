#include <stdio.h>
int main() {
	int a,b,c,sum,product;
	float average;
	scanf("%d%d%d",&a,&b,&c);
	sum = a+b+c;
	product = a*b*c;
	average = (a+b+c)/3.0;
	printf("%d\n",sum);
	printf("%d\n",product);
	printf("%5.3f",average);
	return 0; }