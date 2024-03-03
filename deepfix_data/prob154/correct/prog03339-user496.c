#include <stdio.h>
#include <stdlib.h>
double f(double c) {
    double d;
    if( c<=-1 )
        d=1;
    if( -1<c && c<1 )
        d=c*c;
    if( c>=1 )
        d=c*c*c;
    return d; }
int main() {
    int i,n;
    double a,b,sum;
    scanf("%lf %lf %d",&a,&b,&n);
    double delta_x;
    delta_x=(b-a)/n;
    double x[n];
    for(i=0;i<n;i++)
        x[i]=a+i*(delta_x);
    sum=0;
    for(i=0;i<n;i++) {
       sum=sum+(f(x[i])*delta_x); }
    printf("%.4lf",sum);
	return 0; }