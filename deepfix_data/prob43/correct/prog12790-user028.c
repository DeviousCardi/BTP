#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double f(double m){
    double w;
    w=-(m*m)+(3*m);
    return w; }
double g(double k){
    double q;
    q=(2*k*k*k)-(k*k)-(5*k);
    return q; }
int main() {
	double a,b;
	int n;
	scanf("%lf %lf",&a,&b);
	scanf("%d",&n);
     int i;
	double x[n];
	double area=0.0;
	double r=(b-a)/n;
	for(i=0;i<=n;i++) {
	        x[i]=a+i*r;
	        double t=(abs(f(x[i])-g(x[i])))*r;
	        area=area+t; }
	  printf("%.4lf",area);
	  return 0; }