#include <stdio.h>
#include <stdlib.h>
   double func1(double k)
      {  double c;
         c=(-(k*k)+3*k);
         return c; }
  double func2(double k)
     {  double c;
        c=((2*k*k*k)-(k*k)-(5*k));
       return c; }
int main()
{ int n,i;
  double a,b;
  double x;
  double area=0.0;
  scanf("%lf",&a);
  scanf("%lf",&b);
  scanf("%d",&n);
  x=((b-a)/n);
  for(i=a;i<b;i=i+x)
      { if (func1(a+i)>func2(a+i)) {
              area=area+((func1(a+i)-func2(a+i))*x); }
        else {
           area=area+((func2(a+i)-func1(a+i))*x); } }
     printf("%.4lf",area);
     return 0; }