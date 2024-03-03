#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	double a,b,d,f,g,sum,i,x,y;
	scanf("%lf %lf %d",&a,&b,&n);
	sum=0.0;
	d=(b-a)/(double)n;
	for(i=0;i<n;i++){
	   x=a+d*i;
	   f=-(x*x)+(3*x);
	   g=(2*x*x*x)-(x*x)-(5*x);
	   y=f-g;
	   If(y<0) y=-y;
	   sum=sum+(y*x); }
	printf("%.4lf",sum);
	return 0; }