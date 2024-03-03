#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double x) {
    double a
    a =(-(pow(x,2))+3*x);
    return a; }
double g(double x) {
    double b
    b =((2*pow(x,3))-pow(x,2)-5*x);
    return b; }
int main() {
	double a,b,sum=0;
	int n,k,i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	k=(b-a)/n;
	for(i=0;i<n;i++) {
	    sum=sum+(f(i)-g(i))*k; }
	printf("%.4lf",sum);
	return 0; }