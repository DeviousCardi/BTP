#include <stdio.h>
int main() {
	int a,b,c,s,p;
	float avg;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	s=a+b+c;
	p=a*b*c;
	avg=s/3.0;
	printf("%d\n%d\n%.3f\n",s,p,avg);
	return 0; }