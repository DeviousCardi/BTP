#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double a) {
    double result=-(pow(a,2))+(3.0*a);
    return result; }
double g(double a) {
    double result=2.0*(pow(a,3))-(pow(a,2))-(5.0*a);
    return result; }
double sum(double a, double n, double delx) {
    double summation=0;
    int j;
    for (j=0;j<n;j++)
    {   double x_j=a+j*(delx);
        double r=fabs(f(x_j)-g(x_j));
        summation=summation+t*delx; }
    return summation; }
int main() {
	double a,b;
	int n;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	double delx=((b-a)/n);
	double output=sum(a,n,delx);
	printf("%.4lf",output);
	return 0; }