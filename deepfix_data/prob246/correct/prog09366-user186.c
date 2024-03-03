#include <stdio.h>
int main() {
	int a,b,c,sol;
	float d;
	scanf("%d%d%d",&a,&b,&c);
	sol=a+b+c;
	printf("%d",sol);
	sol=a*b*c;
	printf("%d",sol);
	d=(a+b+c)/3.0;
	printf("%.3f",d);
	return 0; }