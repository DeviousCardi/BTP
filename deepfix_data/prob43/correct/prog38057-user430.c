#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double f(double a){
    double b;
    b=3.0*a-a*a;
    return b;}
double g(double a){
    double b;
    b=2.0*a*a*a-a*a-5.0*a;
    return b; }
int main() {
	int n;
	double a,b,d,sum=0,x,c,e;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	d=(b-a)/n;
	for(x=a; x<b; x=x+d){
	c=f(x);
	e=g(x);
	sum=sum+fabs(c-e)*d;}
	printf("%lf",sum);
	return 0; }