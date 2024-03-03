#include <stdio.h>
#include <stdlib.h>
int mod(int, int);
float f(int);
float g(int);
int main() {
    double a,b, sum=0, x;
    scanf("%lf%lf",&a,&b);
	int n, i=a;
	scanf("%d",&n);
	x=(b-a)/n;
	while(i<=b) {
	    sum=sum+( mod( f(i),g(i) ) )*x;
	    i=i+x; }
	printf("%.4lf",sum);
	return 0; }
float f(int p) {
    float m;
    m=-(p*p)+3*p;
    return (m); }
float g(int q) {
    float n;
    n=2*(q*q*q)-(q*q)-5*q;
    return n; }
int mod(int f, int g) {
    int t;
    if((f-g)<0)
        t=-(f-g);
    else
        t=(f-g);
        return (t); }