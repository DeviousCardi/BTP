#include <stdio.h>
int main() {
	int a,b,c,sum,pro;
	float avg;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	sum=a+b+c;
	pro=a*b*c;
	avg=((float)sum)/3;
	printf("%d\n%d\n%.3f",sum,pro,avg);
	return 0; }