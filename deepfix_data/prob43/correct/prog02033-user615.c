#include <stdio.h>
#include <stdlib.h>
double calculatef(double i) {
    return -(i*i)+(3*i); }
double calculateg(double i) {
    return (2*i*i*i)-(i*i)-(5*i); }
double summation(double x,int n) {
    double k,s,g,f,i;
         for(i=0;i<n-1;i=i+x) {
        g=calculateg(i);
        f=calculatef(i);
        if(f>g)
        k=f-g;
    else k=g-f;
    s=s+k; }
    s=s*x;
 return s; }
int main() {
	double a,b,x,sum;
	int n;
	scanf("%lf %lf %d ",&a,&b,&n);
	x=(b-a)/n;
	sum=summation(x,n);
	printf("%.4lf",sum);
	return 0; }