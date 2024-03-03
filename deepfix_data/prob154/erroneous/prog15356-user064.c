#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double fn(double y) {
    double f;
    if(x>=1)
     f= pow(y,3);
    else if(x>(-1))
     f= pow(x,2);
    else
     f=1;
    return f; }
int main() {
    double a,b,i;
    int n;
    scanf("%lf %lf %d", &a, &b, &n);
    double x= (b-a)/n;
    double Area= 0.0;
    for(i=a;i<b;i=i+x) {
        S= S + fn(i)*x; }
	return 0; }