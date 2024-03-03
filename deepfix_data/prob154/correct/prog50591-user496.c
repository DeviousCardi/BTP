#include <stdio.h>
#include <stdlib.h>
double f(double c) {
    scanf("%lf",&c);
    if( c<=-1 )
        return 1;
    if( -1<c && c<1 )
        return c*c;
    if( c>=1 )
        return c*c*c; }
int main() {
    int i,sum,n;
    double a,b;
    scanf("%lf%lf%d",&a,&b,&n);
    double delta_x;
    delta_x=(b-a)/n;
    double x[n];
    for(i=0;i<n;i++) {
        x[i]=a+i*(delta_x); }
    for(i=0;i<n;i++) {
        static int sum=0;
       sum=sum+(f(x[i])*delta_x); }
    printf("%.4lf",sum);
	return 0; }