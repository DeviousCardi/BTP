#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double a,b;
	int n;
	scanf("%lf ",&a);
	scanf("%lf ",&b);
	scanf("%d ",&n);
	double x=(b-a)/n;
	double f,g,y,area=0;
	int i;
	for(i=0;i<n;i++)
	{ y=a+(x*i);
	    f=(-(y*y)+3*y);
	    g=(2*(y*y*y)-(x*x)-(5*x));
	    area=(abs(f-g)*x)+area;printf("%lf "area); }
	printf("%.4lf",area);
	return 0; }