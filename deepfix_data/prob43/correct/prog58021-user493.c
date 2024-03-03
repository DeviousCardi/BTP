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
	int n;
	int i;
	scanf("%lf %lf",&a,&b);
	scanf("%d",&n);
	x=(b-a)/n;
	double Area=0.0;
	for(i=0;i<=(n-1);i++){
	    A=f(a+x*i);
	    B=g(a+x*i);
	    Area=Area+(B-A)*x;
	    printf("%.4lf",Area); }
	return 0; }