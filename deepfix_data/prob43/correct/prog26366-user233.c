#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n;
    double f[100],g[100],a,b,x,y,sum=0,k;
    scanf("%lf ",&a);
    scanf("%lf ",&b);
    scanf("%lf",&n);
    x=(b-a)/n;
    for(i=0;i<n;i++) {
        k=a+(b-a)/n*(i+1);
        g[i]=2*k*k*k-k*k-5*k;
        f[i]=-1*k*k+3*k; }
    for(i=0.0;i<n;i++) {
        y=f[i]-g[i];
        if(y<0)
        y=y*(-1);
        sum=sum+y*x; }
    printf("%.4lf",sum);
	return 0; }