#include <stdio.h>
#include <stdlib.h>
 double hgf(double x)  {
 double d;
 if ((x>=(-2)  &&  x<=0) || x>2)    {
    d=2*x*x*x-x*x-5*x+x*x-3*x; }
else  {
    d=-x*x+3*x-2*x*x*x+x*x+5*x; }
    return d; }
           int main()  {
           int n,i;    double a,b,u,t;   u=0;
             scanf("%lf%lf%d",&a,&b,&n);
          for(i=0;i<=n-1;i++)  {
             t=a+(float)((b-a)*i)/n;
           u=u+hgf(t)*((float)(b-a)/n); }
           printf("%.4lf",u);
 return 0; }