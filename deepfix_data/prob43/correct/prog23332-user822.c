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
    double z; double dx=(b-a)/n;
    for(i=0;i<n;i++) {
        z=a+(i*(b-a))/n;
        fx=f(z);
        gx=g(z);
        if(fx>gx) {
          area = area + (fx - gx)*(dx); }
        else {
            area = area + (gx - fx)*(dx); } }
    return area; }
double f(double x)
{   double res;
   res=(-x*x)+(3*x);
    return res; }
double g(double x) {
    double res;
    res=(2*x*x*x)-(x*x)-(5*x);
    return res; }