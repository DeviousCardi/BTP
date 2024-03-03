#include <stdio.h>
#include <stdlib.h>
const double epsilon = 0.000001;
double power(double a, int b)
{ int i;
  double res = 1;
  for(i=1; i<=b; i++)
     { res = res*a; }
  return res; }
double ab(double a)
{ double val;
  val = (a>0) ? a : -a;
  return val; }
double findarea(double a, double b, int n)
{ double x, fx, gx, hx, ar=0;
  for(x=a; x<b; x=x+(b-a)/n) {
       fx = -power(x, 2) + (x*3);
       gx = 2*power(x, 3) - power(x, 2) - 5*x;
       hx = fx - gx;
       ar = ar + ab(hx*((b-a)/n)); }
  return ar; }
int main() {
	double area, a, b  ;
	int n;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%d", &n);
	area = findarea(a, b, n);
	printf("%.4lf", area);
	return 0; }