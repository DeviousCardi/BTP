#include <stdio.h>
#include <stdlib.h>
double f(double);
double g(double);
double calcarea(double,double,int);
int main() {
    double a,b; int n;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    printf("%0.4lf",calcarea(a,b,n));
	return 0; }
double calcarea(double a,double b, int n) {
    int i; double fx; double gx; double area=0;
    for(i=0;i<n;i++) {
        fx=f(a+(i*(b-a))/n));
        gx=g(a+(i*(b-a))/n));
        if(fx>gx) {
          area = area + fx - gx; }
        else {
            area = area + gx - fx; } }
    return area; }
double f(double x)
{   double res;
   res=(-x*x)+(3*x);
    return res; }
double g(double x) {
    double res;
    res=(2*x*x*x)-(x*x)-(5*x);
    return res; }