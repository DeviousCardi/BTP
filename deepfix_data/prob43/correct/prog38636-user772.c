#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b;
    int n;
    scanf("%lf%lf",&a,&b);
    scanf("%d",&n);
    double l;
    l=(b-a)/n;
    double sum1=0.0,sum2=0.0,sum3=0.0,sum4=0.0;
    double i=a;
    while (i>=a&&i<=b) {
       if (i<=-2) {
           sum1=sum1+(((-i*i)+3*i)-2*i*i*i-i*i-5*i)*l;
           i=i+l; }
       else if (i>-2&&i<=0) {
           sum2=sum2+((2*i*i*i-i*i-5*i)-((-i*i)+3*i))*l;
           i=i+l; }
       else if (i>0&&i<=2) {
           sum3=sum3+(((-i*i)+3*i)-2*i*i*i-i*i-5*i)*l;
           i=i+l; }
       else if (i>2) {
           sum4=sum4+((2*i*i*i-i*i-5*i)-((-i*i)+3*i))*l;
           i=i+l; } }
    printf("%.4lf",sum1+sum2+sum3+sum4);
	return 0; }