#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int sum=a+b+c;
	int prod=a*b*c;
	float avg=((float)a+(float)b+(float)c)/3;
	printf("%d\n%d\n%.3f",sum,prod,avg);
	return 0; }