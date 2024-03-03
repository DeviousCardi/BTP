#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b,area=0.0, d, l;
    int n,i;
    scanf("%d %lf %lf", &n, &a, &b);
    const int k=n;
    double c[k];
    d=(b-a)/n;
    printf("\n %lf", d);
    c[0]=a;
    c[n-1]=b;
    for(i=1; i<n-1; i++) {
        c[i]=c[i-1]+d; }
    for(i=0; i<n; i++)
    printf("\n %lf", c[i]);
    for(i=0; i<n; i++) {
        l=2.0*c[i]*(c[i]*c[i]-4.0);
        if(l<0)
        l=(-l);
        area=area+l; }
    printf("%lf", area);
	return 0; }