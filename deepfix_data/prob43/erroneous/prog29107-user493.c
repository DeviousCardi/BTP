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
	double a,b,A,B;
	int n,i;
	const double epsilon=0.000001;
	scanf("%lf %lf",&a,&b);
	scanf("%d",&n);
	A=f(a);
	B=f(b);
	double Area=0.0;
	for(i=0;i<n;i++){
	    Area=(A-B)*x;
	    A=f(a+x);
	    B=g(b+x); }
	printf("%lf",Area);
	return 0; }