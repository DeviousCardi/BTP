#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n,i;double a,b,area=0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	double dx=((double)b-a)/(double)n;
	double y=a;
	for(i=0;i<=n-1;i++)
	{y=a+i*dx;
	area=area+abs(2.0*y*y*y-8.0*y)*dx; }
	printf("%.4lf",area);
	return 0; }