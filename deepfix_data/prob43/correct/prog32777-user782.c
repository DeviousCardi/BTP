#include <stdio.h>
#include <stdlib.h>
double F(double x){
    return -x*x +3*x ; }
double G(double x){
    return 2*x*x*x-x*x-5*x ; }
int main() {
	double a,b, A ;
	double n;
	int i,d,f,g;
	scanf("%lf %lf",&a,&b);
	scanf("%lf",&n);
	for (i=0;i<n;i++){
	    double c[i];
	    d=F(a+(b-a)*i/n);
	    f=G(a+(b-a)*i/n);
	    g=((b-a)/n)   ;
	    c[i]=(d-f)*g ;
	    A=c[i]+A; }
	printf ("%.4lf",A);
	return 0; }