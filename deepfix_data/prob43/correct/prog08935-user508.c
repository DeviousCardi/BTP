#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n;double a,b,area=0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	double dx=0.00001;
	double y=a;
	while(y<b)
	{y=y+dx;
	area=area+(abs((-1)*(double)y*y+3.0*y-2.0*y*y*y+(double)y*y+5.0*y))*dx; }
	printf("%.4lf",area);
	return 0; }