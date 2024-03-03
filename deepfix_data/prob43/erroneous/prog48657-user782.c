#include <stdio.h>
#include <stdlib.h>
double F(double x){
    return -x*x +3*x ; }
double G(double x){
    return 2*x*x*x-x*x-5*x ; }
int main() {
	double a,b, A ;
	double t[100];
	double n;
	int i;
	scanf("%lf %lf",&a,&b);
	scanf("%lf",&n);
	for (i=0;i<=n;i++){
	    double t[i];
	    t[i]= F(a+(b-a)*i/n)-G(a+(b-a)*i/n))*(b-a)/n   ; }
	for (i=0;i<n;i++){
	    A=t[i]+A; }
	printf ("4%lf",A);
	return 0; }