#include<stdio.h>
#include<stdlib.h>
double func1(double k)
 {  double c;
   c=((-(k*k))+(3*k)) ;
   return c; }
double func2(double z)
{ double m;
  m=((2*z*z*z)-(z*z)-(5*z));
  return m; }
int main()
{int n;
 double a,b,i,area=0.0;
 double x,y,d,e;
 scanf("%lf",&a);
 scanf("%lf",&b);
 scanf("%d",&n);
  x=((b-a)/n);
  y=x;
    for(i=0;i<n;i=i+x) {
           d=func1(a+i);
         e=func2(a+i);
         if(d>e) {
             area=area+((d-e)*y);
             printf ("%lf",area); }
         else if(e>d) {
              area=area+((e-d)*y); } }
        return 0; }