#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(int x)
    { double e;
      e=-1*pow(x,2)+3*x;
      return e; }
double g(int x)
    { double r;
      r=2*pow(x,3)-pow(x,2)-5*x;
      return r; }
int main() {
	int n;
	double i,a,b,area=0;
	scanf("%lf%lf%d",&a,&b,&n);
	for(i=a;i<=b;i=i+(double((b-a)/n))) {
	    area=area+(abs(f(i)-g(i))*(double((b-a)/n))); }
	printf("%.4lf",&area);
	return 0; }