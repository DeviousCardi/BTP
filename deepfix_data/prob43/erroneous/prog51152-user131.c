#include <stdio.h>
#include <stdlib.h>
double ro(double x) {
       f=-x*x+3*x;
       g=2*x*x*x-x*x-5*x;
    if ((x>=(-2)  &&  x<=0) || x<2)  {
        d=g-f; }
    else  {
        d=f-g; }
    return d;  }
    int main()  {
     int n,i;    double a,b,u,t;   u=0;
   scanf("%d%lf%lf",&n,&a,&b);
 for(i=0;i<=n-1;i++)  {
    t=a+(b-a)/n;
    u=u+ro(t)*((b-a)/n); }
 printf("%lf",u);
 return 0; }
	return 0; }