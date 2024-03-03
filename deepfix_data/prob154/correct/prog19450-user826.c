#include <stdio.h>
#include <stdlib.h>
double func();
double func(double x)
{if(x<=(-1))
 {return 1;}
  else if(x>(-1) && x<1)
  {return (x*x);}
  else {
      return (x*x*x); } }
int main() {
    int n;
    double i,k,a,b;
    scanf("%lf%lf",&a,&b);
    scanf("%d",&n);
    k=(b-a)/n;
   double sum=0.0;
    for(i=a;i<b-k;i=i+k) {
      sum=sum+func(i); }
    printf("%.4lf",sum*k);
	return 0; }