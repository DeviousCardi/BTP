#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,x,y,area=0,d;
	int n;
	scanf("%lf",&a);
	scanf("%lf",&b);
	x=a;
	scanf("%d",&n);
	d=(b-a)/n;
	while(x<b) {
	    y=x+d;
	    if(x<=-1)
	    area=area+d;
	    else if(x<1)
	    area=area+(x*x*d);
	    else
	    area=area+(x*x*x*d);
	x=y; }
	printf("%lf",area);
	return 0; }