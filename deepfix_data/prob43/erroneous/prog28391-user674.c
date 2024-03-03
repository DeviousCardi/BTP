#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    double a, b;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    int i;
    double x;
    double area=0;
    for(i=0; i<n; i++) {
        x=a+(((b-a)/n)*i);
        if((x<=-2)||((x>=0)&&(x<=2))
        area=area + (8*x-(2*x*x*x))*((b-a)/n);
        else
        area=area - (8*x-(2*x*x*x))*((b-a)/n); }
     printf("%.4lf",&area);
	return 0; }