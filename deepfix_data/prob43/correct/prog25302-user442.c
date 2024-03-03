#include <stdio.h>
#include <stdlib.h>
int mod(int, int);
int fxn(int);
int gxn(int);
int main() {
    double a,b, sum=0, x;
    int n, i, count=0;
    scanf("%lf %lf %d",&a,&b,&n);
	x=(b-a)/n;
	for(i=0; i<n; i++) {
	    sum=sum+( mod(fxn(a+count),gxn(a+count)) );
	    count=count+x; }
	printf("%.4lf",sum);
	return 0; }
int fxn(int p) {
    int m;
    m=-(p*p)+3*p;
    return (m); }
int gxn(int q) {
    int n;
    n=2*(q*q*q)-(q*q)-5*q;
    return (n); }
int mod(int f, int g) {
    int t;
    if((f-g)<0)
        t=-(f-g);
    else
        t=(f-g);
        return (t); }