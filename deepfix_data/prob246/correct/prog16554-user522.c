#include <stdio.h>
int main() {
	int a,b,c,sum,product;
	float average;
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	product=a*b*c;
	average=(float)((a+b+c)/3);
	printf("%d\n%d\n%.3f",sum,product,average);
	return 0; }