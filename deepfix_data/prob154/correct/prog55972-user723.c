#include <stdio.h>
#include <stdlib.h>
int main() {
    double f(double x){
        double val;
        if(x<=-1)
            val=1;
        if(x>=1)
            val=x*x*x;
        else
            val=x*x;
        return val; }
    int n,i;
    double a,b,dx,x,area;
    area=0;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    dx=(b-a)/n;
    for(i=0;i<n;i++){
        x=a+dx*i;
        area=area+x*dx; }
    printf("%lf",area);
	return 0; }