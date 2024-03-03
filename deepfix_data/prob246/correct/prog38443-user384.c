#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	int sum,mult;
	float ave;
	sum=a+b+c;
	mult=(a)*(b)*(c);
	ave=(sum)/3;
	printf("%d\n%d\n%.3f",sum,mult,ave);
	return 0; }