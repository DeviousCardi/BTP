#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	float f;
	float a,b,d,area;
	area=0;
	scanf("%f %f %d",&a,&b,&n);
	d=(b-a)/n;
	for(i=0;i<n+1;i++) {
	    float x =a+(i)*d;
	     if (x<=-1)
	     f=1;
    else if (x>-1 && x<1)
    f=(x*x);
    else if (x>=1)
    f=x*x*x;
	area=area + (d*f);}
	printf("%f",area);
	return 0; }