#include <stdio.h>
#include <stdlib.h>
double fun(double x) {
    double fx;
    if(x<=-1)
        fx=1;
    else if(x>(-1)&&x<=1)
        fx=x*x;
    else
        fx=x*x*x;
        return fx; }
int main() {
    double a,b;
    double area=0;
    int n;
    int i;
    scanf("%lf %lf %d",&a,&b,&n);
    double p[n+1];
    p[0]=a;
    for(i=1;i<n+1;i++) {
        p[i]=p[i-1]+((b-a)/n); }
    for(i=0;i<n;i++) {
        area=area+(fun(p[i])*((b-a)/n)); }
    printf("%lf",area);
	return 0; }