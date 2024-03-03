#include <stdio.h>
#include <stdlib.h>
double calc(double c,double d,long s);
double f(double x);
double g(double y);
int main() {
 double a,b,area;
 int n;
 scanf("%lf",&a);
 scanf("%lf",&b);
 scanf("%d",&n);
 area=calc(a,b,n);
 printf("%.4lf",area);
return 0; }
double f(double x) {
 double u;
 u=-1*x*x*x;
 return u; }
double g(double y) {
 double v;
 v=(2*y*y*y)-(y*y)-(5*y);
 return v; }
double calc(double c,double d,long s) {
  double sub,r,p,area=0.0;
  sub=(1.0*(d-c))/s;
  long i=0.0;
  while(i<s) {
      r=f(c+i*sub);
      p=g(c+i*sub);
  if(p>r)
  area=area+(p-r);
  else
  area=area+(r-p);
  i++; }
   return area; }