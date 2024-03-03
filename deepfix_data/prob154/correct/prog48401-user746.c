#include <stdio.h>
#include <stdlib.h>
const double epsilon = 0.000001;
double fx(double);
int main() {
    int n,i;
    double a,b,dx,area, x[n+1];
    scanf("%lf %lf %d",&a,&b,&n);
    dx= (b-a)/n;
    x[0]=a;
    x[n]=b;
    for(i=1;i<n;i++) {
        x[i]=x[i-1]+dx; }
    area=0;
    for(i=0;i<n;i++) {
        area+= fx(x[i])*dx; }
    printf("%.4lf", area);
    return 0; }
double fx(double x) {
    if(x-epsilon<=-1.0)
    return 1.0;
    else if(x-epsilon>-1.0 && x-epsilon<1.0)
    return x*x;
    else
    return x*x*x; }