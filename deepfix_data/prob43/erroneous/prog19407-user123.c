#include <stdio.h>
#include <stdlib.h>
double abs_value(double k) {
    if(k>=0)
    return k;
    else (k<0)
    return -k; }
double f(double x) {
    double m;
    m=-(x*x)+(3*x);
    return m; }
double g(double y) {
    double n;
    n=(2*y*y*y)-(y*y)-(5*y);
    return n; }
int main() {
    double a,b;
    int n;
    scanf("%lf%lf%d",&a,&b,&n);
    int i;
    double del_x;
    del_x=(b-a)/n;
    double area=0.0;
    double xi;
    for(i=0;i<n;i++) {
      xi= a+((i*(b-a))/n);
      area=area+(abs_value(f(xi)-g(xi))*del_x); }
    printf("%.4f",area);
	return 0; }