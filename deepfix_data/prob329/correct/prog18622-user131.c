#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int b;
	int c;
	scanf("%d%d%d",&a,&b,&c);
	if (a+b>c || a+c>b || b+c>a)
{	if (a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
	printf("right  triangle");
	else
	printf("not right triangle"); }
	else
	printf("cannot form a triangle");
	return 0; }