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
	double a,b,sum=0,x,c,e;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	d=(b-a)/n;
	for(x=a; x<=b; x=x+d){
	c=f(x);
	e=g(x);
	sum=sum+(c-e)*d;}
	printf("%lf",sum);
	return 0; }