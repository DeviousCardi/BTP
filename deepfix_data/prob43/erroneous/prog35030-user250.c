#include <stdio.h>
#include <stdlib.h>
 double f(double x)
   {  double s;
       s=-(x*x)+(3*x);
       return s; }
  double g(double y)
   {  double t;
       t=(2*x*x*x)-(x*x)-(5*x);
       return t; }
  double mod(double a,double b)
   {   double u;
       if(a>b)
         u=a-b;
       else
         u=b-a;
         return u; }
int main() {
    double a,b,x,s;
    int n,i;
    s=0;
    scanf("%lf %lf ",&a,&b);
    scanf("%d",&n);
    double dx=(b-a)/n;
    for(i=0;i<n;i++)
      {  x=a+(dx)*i;
        s=s+(mod(f(x),g(x)))*(dx); }
       printf("%.4lf",s);
	return 0; }