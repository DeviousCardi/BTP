#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
double a, b, dx, area=0.0;
int n,i;
scanf("%lf/n%lf/n%d/n",&a,&b,&n);
dx=(b-a)/n;
printf ("%d",dx)
double f(int i) {
    double fa, xi;
    xi=a+i*(b-a)/n;
    fa= -pow(xi,2)+3*xi;
    return fa; }
double g(int i) {
    double ga,xi;
    xi=a+i*(b-a)/n;
    ga= 2*pow(xi,3)-pow(xi,2)-5*xi;
    return ga; }
for(i=0;i<n;i++) {
    if(f(i)>=g(i)) {
        area = area + (f(i)-g(i))*dx; }
    else {
        area = area+ (g(i))-f(i))*dx; } }
printf("%0.4lf", area);
	return 0; }