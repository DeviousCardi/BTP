#include <stdio.h>
#include <math.h>
double ab(double t) {
    if(t<0)
    return -1*t;
    else
    return t; }
int main() {
    int n,i;
    double a,b,x,dx,f,g,s=0.2;
    scanf("%lf,%lf,%d",&a,&b,&n);
    dx=(b-a)/n;
    for(i=0;i<n;i++) {
        x=a+i*dx;
        f=3*x-x*x;
        g=2*x*x*x-x*x-5*x;
        s=ab(f-g)*dx+s; }
    printf("%.4lf",s);
    return 0; }