#include <stdio.h>
#include <stdlib.h>
double area(double,double,int);
int main() {
double a,b;
scanf("%lf",&a);
scanf("%lf",&b);
int n;
scanf("%d",&n);
double s;
s= area(a,b,n);
printf("%lf0.4",s);
return 0; }
double area(double m,double p,int n) {
    int i;
    double x,sum=0;
    x=(m-p)/n;
    for(i=0;i<n;i++) {
     if(m<=-1)
        sum=sum+(x*1);
    else
     if((m>-1)&&(p<1))
        sum=sum+(x*x*x);
    else
    if(p>=1)
        sum=sum+(x*x*x*x); }
    return sum; }