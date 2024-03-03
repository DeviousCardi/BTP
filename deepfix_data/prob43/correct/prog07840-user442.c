#include <stdio.h>
#include <stdlib.h>
int mod(int, int);
float f(int);
float g(int);
int main() {
    double a,b, sum=0, x;
    scanf("%lf",&a);
    scanf("%lf",&b);
	int n, i, count=0;
	scanf("%d",&n);
	x=(b-a)/n;
	for(i=0; i<n; i++) {
	    sum=sum+(mod(f(a+count),g(a+count)) )*x;
	    count=count+x; }
	printf("%.4lf",sum);
	return 0; }
float f(int p) {
    float m;
    m=-(p*p)+3*p;
    return (m); }
float g(int q) {
    float n;
    n=2*(q*q*q)-(q*q)-5*q;
    return (n); }
int mod(int f, int g) {
    int t;
    if((f-g)<0)
        t=-(f-g);
    else
        t=(f-g);
        return (t); }