#include <stdio.h>
#include <stdlib.h>
double calculatef(double i) {
    return -(i*i)+(3*i); }
double calculateg(double i) {
    return (2*i*i*i)-(i*i)-(5*i); }
double summation(double x,int n,double a,double b) {
    double k,s=0,g,f,i;
         for(i=a;i<b;i++) {
        g=calculateg(i);
        f=calculatef(i);
        if(f>g)
        k=f-g;
    else k=g-f;
    s=s+(k*x); }
 return s; }
int main() {
	double a,b,x,sum;
	int n;
	scanf("%lf %lf %d ",&a,&b,&n);
	x=(b-a)/n;
	sum=summation(x,n,a,b);
	printf("%.4lf",sum);
	return 0; }