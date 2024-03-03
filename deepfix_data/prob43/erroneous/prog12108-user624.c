#include <stdio.h>
#include <stdlib.h>
double f(double x){return -x*x+3*x;}
double g(double x){return 2*x*x*x-x*x-5*x;}
double mod((double f(double i))-(double g(double i))){
                if(f(i)-g(i)<0) return g(i)-f(i);
                else return f(i)-g(i); }
int main() {
	double a,b,i;
	int n;
	scanf("%lf%lf%d",&a,&b,&n);
	double s,A;
	    s=(b-a)/n;
	for(i=a;i<=b;i=i+s)
	    A=A+mod(f(i)-g(i))*s;
	printf("%lf",&A);
	return 0; }