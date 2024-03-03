#include <stdio.h>
#include <stdlib.h>
int mod(int, int);
int f(int);
int g(int);
int main() {
    double a,b, sum=0, x, i;
    scanf("%lf%lf",&a,&b);
	int n;
	scanf("%d",&n);
	x=(b-a)/n;
	for(i=a; i<=b; i++) {
	    sum=sum+( mod( f(i),g(i) )*x ); }
	return 0; }
int f(int p) {
    int m;
    m=-(p*p)+3*p;
    return (m); }
int g(int q) {
    int n;
    n=2*(q*q*q)-(q*q)-5*q;
    return n; }
int mod(int f, int g) {
    int t;
    if((f-g)>0)
        t=-(f-g);
    else
        t=(f-g);
        return (t); }