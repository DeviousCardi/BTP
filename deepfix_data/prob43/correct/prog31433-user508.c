#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n,i;double a,b,area=0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	double dx=(b-a)/n;
	double y=a;
	for(i=0;i<=n;i++)
	{y=a+i*dx;
	area=area+abs(2.0*y*y*y-8.0*y)*dx; }
	printf("%.4lf",area);
	return 0; }