#include <stdio.h>
#include <stdlib.h>
double funct(double n) {
    double y;
    if(n<=-1)
    y=1;
    else if((n>-1)&&(n<1))
    y=n*n;
    else if(n>=1)
    y=n*n*n;
    return y; }
int main() {
    double a,b,x,s;
    int n,i;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    if (b==a) {
        printf("0.0000"); }
    x=(b-a)/n;
    for(i=0;i<n;i++) {
        s=0;
        s=s+x*funct(i);
        printf("%.4lf",s); }
	return 0; }