#include <stdio.h>
#include <stdlib.h>
   double func1(double k)
      {  double c;
         c=(-(k*k)+3*k);
         return c;
         printf("%lf",c); }
  double func2(double k)
     {  double c;
        c=((2*k*k*k)-(k*k)-(5*k));
       return c; }
int main()
{ int n;
  double a,b,i;
  double x,d,e;
  double area=0.0;
  scanf("%lf",&a);
  scanf("%lf",&b);
  scanf("%d",&n);
  x=((b-a)/n);
  for(i=a;i<b;i=i+x)
      { d=func1(a+i);
        e=func2(a+i);
          if (d>e) {
              area=area+((d-e)*x); }
        else {
           area=area+((e-d)*x); } }
     printf("%.4lf",area);
     return 0; }