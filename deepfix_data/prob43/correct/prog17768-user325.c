#include <stdio.h>
#include <stdlib.h>
int main() {
    double x,a,b,c;
    int n,i,r,j;
    scanf("%lf%lf%d",&a,&b,&n);
    double l[n],d[n];
    for(r=0;r<=n;r++) {
        l[r]=a+r*((b-a)/n); }
    x=(b-a)/n;
    for(i=0;i<=n-1;i++) {
        c=-2*(l[i]*l[i]*l[i])+8*l[i];
        d[i]=((c))*x; }
    for(j=0;j<=n-1;j++) {
        d[j]=d[j]+d[j-1]; }
    printf("%0.4lf",d[n-1]);
	return 0; }