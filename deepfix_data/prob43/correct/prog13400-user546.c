#include <stdio.h>
#include <math.h>
double mod(double x) {
   if(x>=0)
     x=x;
  else
      x=x*(-1);
   return x; }
double f(double y)
{    double p;
   p=-(y*y)+3*y;
  return p; }
double g(double x) {
   double k;
   k=2*(x*x*x)-(x*x)-5*x;
   return k; }
int main() {
    int n,j=0;
    double a,b,x[j];
    double dx,sum=0;
    scanf(" %d %d %d",&a,&b,&n);
    dx=(double)((b-a)/n);
	x[0]=a;
	for(j=1;j<=n;j++) {
	   x[j]=x[0]+j*dx; }
	for(j=0;j<n;j++) {
	    sum=sum+(mod(g(x[j])-f(x[j])))*dx; }
	printf("%0.4lf",sum);
	return 0; }