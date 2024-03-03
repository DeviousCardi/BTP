#include <stdio.h>
#include <stdlib.h>
double dif(double);
int main() {
    double a,b,x,dx;
    int n,i;
    scanf("%lf %lf %n",&a,&b,&n);
    dx=(b-a)/n;
    double area=0.0;
    for(i=0;i<=n-1;i++) {
        x=a+i*dx;
        area=area+dif(x)*dx; }
    printf("%lf",area);
    return 0; }
double dif(double x) {
    double val=-2*x*x*x+8*x;
    if(val>0)
    return val;
    return (-val); }