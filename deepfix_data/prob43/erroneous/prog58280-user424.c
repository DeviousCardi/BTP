#include <stdio.h>
#include <stdlib.h>
double f(double x){
    return -x*x+3*x; }
double g(double x){
    return 2*x*x*x-x*x-5*x; }
double mod(double x){
    if(x>=0) return x;
    else return -x; }
int main() {
    double a,b;
	int i,n;
	scanf("%lf %lf %d",a,b,n);
	double dx=(b-a)/n;
	double x[n];
	for(i=0;i<n;i++){
	    x[i]=a+i*dx }
	for(k=0;k<n;k++){
	} printf("%d",mod(1.0));
	return 0; }