#include <stdio.h>
int main() {
	int a,b,c,sum,pro_;
	float avg;
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	pro_=a*b*c;
	avg=((a+b+c)/3);
	printf("%d\n%d\n%.3f",sum,pro_,avg);
	return 0; }