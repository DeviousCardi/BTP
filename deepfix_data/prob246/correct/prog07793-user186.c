#include <stdio.h>
int main() {
	int a,b,c,sol;
	float d;
	scanf("%d%d%d",&a,&b,&c);
	d=a+b+c;
	printf("%d",d);
	d=a*b*c;
	printf("%d",d);
	d=(a+b+c)/3.0;
	printf("%.3f",d);
	return 0; }