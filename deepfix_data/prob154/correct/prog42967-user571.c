#include <stdio.h>
#include <stdlib.h>
    double f(double x) {
        if(x<=-1) {
            return 1; }
        if(x>-1 && x<1) {
            return x*x; }
        return x*x*x; }
    int main() {
        double a,b,delx,area=0,x;
        int n,i;
        scanf("%lf %lf %d",&a,&b,&n);
        delx=(b-a)/n;
        for(i=0;i<n;i++) {
            x=a+i*(delx);
            area=area+f(x)*delx; }
        printf("%0.4lf",area);
    return 0; }