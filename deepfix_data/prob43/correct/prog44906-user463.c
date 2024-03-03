#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double x) {
    double y;
    y=-x*x+3*x;
    return y; }
double g(double x) {
    double y;
    y=2*x*x*x-x*x-5*x;
    return y; }
int main() {
    double a,b,d,result;
    int n,i;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    d=(b-a)/n;
    double x[n];
    for(i=0;i<n;i++) {
     x[i]=a+i*d; }
    double diff[n];
    double sum=0;
    for(i=0;i<n;i++) {
      diff[i]=abs(f(x[i])-g(x[i]));
      sum=sum+diff[i]; }
    result=sum*d;
    printf("%.4lf",result);
	return 0; }