#include <stdio.h>
int main() {
	int a,b,c,sum,product;
	float avg;
	scanf("%d %d %d",&a,&b,&c);
	sumn=a+b+c;
	product=a*b*c;
	avg=((float)a  + (float)b + (float)c)/3.0;
	printf("%d\n%d\n%.3f",sum,product,avg);
	return 0; }