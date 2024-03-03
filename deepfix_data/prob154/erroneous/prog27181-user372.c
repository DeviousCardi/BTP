#include <stdio.h>
#include <stdlib.h>
float f(float x){
    if (a<=-1){ f(x)=1}
    else if (a>-1 && a<1){f(x)=x*x}
    else if (a>=1){f(x)=x*x*x}
    return f(x); }
int main() {
	int i,n;
	float f(float x);
	float a,b,d,x,area;
	area=0
	scanf("%f %f %d",&a,&b,&n);
	d=(b-a)/n;
	for(i=0;i<n+1;i++)
	{ float x=a+(i)*d;
	area=area + (d*f(x));
	return 0; }