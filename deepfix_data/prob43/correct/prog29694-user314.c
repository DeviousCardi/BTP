#include <stdio.h>
#include <stdlib.h>
double pow(double a, double b) {
    int i;
    for(i=0;i<b-2;i++) {
        a=a*a; }
    return a; }
double f(double x) {
   double a;
   a=(-(pow(x,2))+3*x);
    return a; }
double g(double x) {
    double b;
     b=((2*pow(x,3))-(pow(x,2))-5*x);
    return b; }
double mod(double a, double b) {
    double x;
    if(a>=b) {
        x=a-b; }
    if(b>=a) {
        x=b-a; }
   return x; }
int main() {
	double a,b,area=0;
	int n,i;
	double x=0,k;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	k=(b-a)/n;
	for(i=0;i<n;i++) {
	    x=i*k;
	    area=area+(mod(f(x),g(x)))*2*k; }
	printf("%.4lf",area);
  return 0; }