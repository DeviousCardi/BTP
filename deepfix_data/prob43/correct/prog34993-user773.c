#include <stdio.h>
#include <stdlib.h>
double f(double x){
    return (-x*x + 3*x); }
double g(double x){
    return (2*x*x*x - x*x - 5*x); }
int main() {
	double a, b, p, t=0;
	long int n,i;
	scanf("%lf%lf%ld", &a, &b, &n);
	for(i=0; i<n; i++){
	    p= a+ i*(b-a)/n;
	    if(p<-2 || (p>0 && p<=2)){
	        t=t+ (f(p)-g(p))*(b-a)/n; }
	    else{
	        t = t+ (g(p)-f(p))*(b-a)/n; } }
	printf("%.4lf", t);
	return 0; }