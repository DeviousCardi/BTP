#include <stdio.h>
#include <stdlib.h>
double f(double x)
{return (-x*x)+3*x;}
double g(double y)
{return (2*y*y*y)-(y*y)-5*y;}
double mod(double z)
{ if(z<0)
  {return -z;}
  else
  {return z;} }
int main() {
    double a,b;
    scanf("%lf%lf",&a,&b);
    int n;
    scanf("%d",&n);
    double r;
    r=(b-a)/n;
    int i;
    double sum=0;
    double t;
    for(i=0;i<n;i++) {
        t=a+i*r;
        sum=sum+mod(f(t)-g(t))*r; }
	printf("%.4lf",sum);
	return 0; }