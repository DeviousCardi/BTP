#include <stdio.h>
#include <stdlib.h>
double f(double x) {
    double fx;
    if(x<=-1){
        fx=1; }
    else if(x>-1&&x<1){
        fx=x*x; }
    else {
        fx=x*x*x; }
    return fx; }
int main() {
	int n;
	double a,b;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	double sum=0,dx=(b-a)/n;
	int i;
	for(i=0;i<n;i++){
	    sum=sum+f(a+i*dx)*dx; }
	printf(".4lf",sum);
	return 0; }