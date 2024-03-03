#include <stdio.h>
#include <stdlib.h>
double f(double x){
     f(x)= -1*pow(x,2)+ (3*x);
     return f; }
 double g(double)
    g= 2*pow(x,3)- 1*pow(x,2)- 5*x;
    return g;
int main() {
	double a,b;
	int n;
	double i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	double result=0;
	double delx;
	delx= (b-a)/n*1.0;
	for(i=0;i<n;i++){
	    result=result+ (f(i)-g(i))*delx; }
	printf("%lf",result);
	return 0; }