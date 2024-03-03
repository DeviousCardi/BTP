#include <stdio.h>
#include <stdlib.h>
const double e=0.000001;
double f(double x) {
    scanf("%lf",&x);
    double ans;
    if(((double x)+1)<=e)
        ans=1;
    else if((double x)+1>=e)&&((double x)-1<=e))
        ans=x*x;
    else
        ans=x*x*x;
  return ans; }
int main() {
    const double epsilon=0.000001;
    int n,i;
    double a,b,dx,area,d_area;
    double x[n];
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    if((b-a)<epsilon) {
        printf("0.0000"); }
    dx=(b-a)/n;
    x[0]=a;x[n]=b;
    for(i=1;i<n;i++) {
        x[i]=x[i-1]+dx; }
    area=0.0000;
    for(i=0;i<n;i++) {
        d_area=f(x[i])*dx;
        area=area+d_area; }
    printf("%.4lf",area);
	return 0; }