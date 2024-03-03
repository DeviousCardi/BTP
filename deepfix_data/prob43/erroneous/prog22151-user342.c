#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double fx(double x) {
    double y=-pow(x,2)+3*x;
    return y; }
double gx(double x) {
    double y=2*pow(x,3)-pow(x,2)-5*x;
    return y; }
double area (double a, double b, int n)
{   int i;double f,g,h,sum=0;
    h=(b-a)/n
    for(i=0;i<n;i++) {
        f=fx(a+i*h);
        g=gx(a+i*h);
        sum=sum+abs(f,g)*h; }
    return sum; }
int main() {
    int n;
    double a,b,c;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    double ar=area(a,b,n);
    printf("%.4lf",ar);
	return 0; }