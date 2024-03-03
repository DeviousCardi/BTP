#include <stdio.h>
#include <stdlib.h>
double f(double a){
    double b;
    b=3*a-a*a;
    return b;}
double g(double a){
    double b;
    b=2*a*a*a-a*a-5*a;
    return b; }
int main() {
	int d,n;
	double a,b,sum=0,x;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	d=(b-a)/n;
	for(x=a; x<=b; x=x+d)
	sum=sum+(f(x)-g(x))*d;
	printf("%lf",sum);
	return 0; }