#include <stdio.h>
#include <stdlib.h>
double f(double x){
    double F;
    F=-x*x+3*x;
    return F; }
double g(double x){
    double G;
    G=2*x*x*x-x*x-5*x;
    return G; }
int main() {
	double a,b,x,A,B;
	long int n;
	int i;
	const double epsilon=0.000001;
	scanf("%lf %lf",&a,&b);
	scanf("%ld",&n);
	x=(b-a)/n;
	A=f(a);
	B=f(b);
	double Area=0.0;
	for(i=1;i<=n;i++){
	    Area=(A-B)*x;
	    A=f(a+x);
	    B=g(b+x); }
	printf("%.4lf",Area);
	return 0; }