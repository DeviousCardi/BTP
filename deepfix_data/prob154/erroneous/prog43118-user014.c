#include <stdio.h>
#include <stdlib.h>
double f(double a) {
    if(a<=1.0)
        return 1.0;
    else if(a>=1.0)
        return a*a*a;
    else
        return a*a; }
int main() {
    double area=0,a,b,e,i;
    int n;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    e=(b-a)/n;
    for(i=0;i<n;i++) {
            area=area + f(a+i*e)*e; }
    printf("%lf",area;)
	return 0; }