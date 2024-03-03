#include <stdio.h>
#include <stdlib.h>
const double epsilon = 0.000001;
double dif(double);
int main() {
    double a,b,x,dx;
    int n,i;
    scanf("%lf %lf %n",&a,&b,&n);
    dx=(b-a)/n;
    double area=0.000000;
    for(i=0;i<=n-1;i++) {
        x=a+i*dx;
        area=area+dif(x)*dx; }
    printf("%.4lf",area);
    return 0; }
double dif(double x) {
    double val=-2*x*x*x+8*x;
    val=(int)(val*1000000);
    val=val*epsilon;
    if(val>0)
    return val;
    return -val; }