#include <stdio.h>
#include <stdlib.h>
double f(double c) {
    double d;
    scanf("%lf",&c);
    if( c<=-1 )
        d=1;
    if( -1<c && c<1 )
        d=c*c;
    if( c>=1 )
        d=c*c*c;
    return d; }
int main() {
    int i,sum,n;
    sum=0;
    double a,b,k;
    scanf("%lf%lf%d",&a,&b,&n);
    double delta_x;
    delta_x=(b-a)/n;
    double x[n];
    for(i=0;i<n;i++)
        x[i]=a+i*(delta_x);
    for(i=0;i<n;i++) {
       sum=sum+(f(x[i])*delta_x); }
    k=sum;
    printf("%.4lf",k);
	return 0; }