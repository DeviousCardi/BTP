#include <stdio.h>
int main() {
	int a,b,c;
	int d,e;
	float f;
	scanf("%d%d%d",&a,&b,&c);
	d=a+b+c;
	e=a*b*c;
	f=(a+b+c)/3.0;
	printf("%d,%d,%f",d,e,f);
	return 0; }