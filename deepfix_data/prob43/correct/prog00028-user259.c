#include <stdio.h>
#include <stdlib.h>
const double epsilon = 0.000001;
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
    printf("%.4lf",area);
    return 0; }
double dif(double x) {
    double val=-2*x*x*x+8*x;
    val=(int)(val*10000);
    val=val/10000;
    if(val>=epsilon)
    return val;
    else if(val>(-epsilon)&&val<epsilon)
    return 0.0;
    return -val; }