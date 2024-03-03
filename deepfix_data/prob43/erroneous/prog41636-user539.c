#include <stdio.h>
#include <stdlib.h>
double f(double a) {
           double q;
           q=0-a*a+3*a;
           return q; }
double g(double b) {
              double s;
              s=2*b*b*b-b*b-5*b;
              return s; }
double mod(double u,double v) {
          double d;
          d=(u-v);
          if(d<=0){d=0-d;}
          return d; }
int main() {
    scanf("%ld",&a);
    scanf("%ld",&b);
    scanf("%d",&n);
    double x[n],a[n];
    double p;
    p=(b-a)/n;
    x[0]=a;
    x[n]=b;
    for(i=1;i<n;i++) {
           x[i]=a+p; }
    double sum=0;
    for(i=0;i<n;i++) {
           a[i]=mod(f(x[i]),g(x[i]))*p;
           sum=sum+a[i]; }
       printf("%0.4ld",&sum);
	return 0; }