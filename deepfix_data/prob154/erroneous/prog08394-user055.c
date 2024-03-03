#include <stdio.h>
#include <stdlib.h>
double function(double x) {
      double b;
      if (x<=-1)
      b=1;
      else if (x<1)
      b= x*x;
      else
      b=x*x*x;
      return (b); }
int main() {
	double a,b,x,y,area=0;
	scanf("%lf%lf",&a,&b);
	int i,n;
	scanf("%d",&n);
	x= (b-a)/n;
	for (i=0;i<n;i=i+1) {
	       y= a + i*x;
	       area= area+ x*function(y); }
	  printf("%lf",/.4area);
	return 0; }