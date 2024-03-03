#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a,b,c,z,x;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	z=max{a,b,c};
	x=min{a,b,c};
	printf("%d",a+b+c-z-x);
	return 0; }