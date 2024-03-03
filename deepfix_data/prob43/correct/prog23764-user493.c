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
	scanf("%lf %lf",&a,&b);
	scanf("%ld",&n);
	x=(b-a)/n;
	A=f(a);
	B=f(b);
	double Area=0.0,Area2;
	for(i=0;i<n;i++){
	    A=f(a+x*i);
	    B=g(b+x*i);
	    Area2=(A-B)*x;
	    Area=Area+Area2; }
	printf("%.4lf",Area);
	return 0; }