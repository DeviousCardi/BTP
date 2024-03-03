#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double pow(double a, double b) {
    int i;
    for(i=0;i<=b;i++) {
        a=a*a; }
    return a; }
double f(double x) {
   double a;
   if((x>=-2)||(x<=2))
    a=(-(pow(x,2))+3*x);
    return a; }
double g(double x) {
    double b;
    if((x>=-2)||(x<=2))
    b=((2*pow(x,3))-(pow(x,2))-5*x);
    return b; }
double mod(double a, double b) {
    double x;
    if(a>=b) {
     x=a-b; }
   return x; }
int main() {
	double a,b,sum;
	int n,k,i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	k=(b-a)/n;
	for(i=0;i<n;i++) {
	    sum=sum+(mod(f(i),g(i)))*k; }
	printf("%.4lf",sum);
  return 0; }