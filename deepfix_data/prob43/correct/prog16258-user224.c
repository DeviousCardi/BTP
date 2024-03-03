#include <stdio.h>
#include <stdlib.h>
double calc(double c,double d,long s);
double f(double x);
double g(double y);
int main()
{double a,b,area;
 int n;
 scanf("%lf",&a);
 scanf("%lf",&b);
 scanf("%d",&n);
 area=calc(a,b,n);
 printf("%.4lf",area);
return 0; }
double f(double x)
{double v;
v=-1*x*x*x;
return v; }
double g(double y)
{double v;
v=2*y*y*y-y*y-5*y;
return v; }
double calc(double c,double d,long s)
{double sub,v1,v2,ar=0.0;
  sub=(1.0*(d-c))/s;
  long i;
  for(i=0;i<s;i++) {
      v1=f(c+i*sub);
      v2=g(c+i*sub);
  if(v1>v2)
  ar=ar+(v1-v2);
  else
  ar=ar+(v2-v1); }
   return ar; }