#include <stdio.h>
#include <stdlib.h>
double f(double);
double g(double);
double calcarea(double,double,int);
double f(double x)
{   double res;
   res=(-x*x)+(3*x);
    return res; }
int main() {
    double x=2.0;
    printf("%lf",(2*x*x*x)-(x*x)-(5*x));
    return 0; }