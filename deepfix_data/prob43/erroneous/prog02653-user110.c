#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double abs_val (double i) {
    if (i>=0)
    return i;
    else
    return -i; }
double f_x_g_x(double x) {
    double p;
    p=(3*x-pow(x,2)) - (2*(pow(x,3))-pow(x,2)-5*x);
    p=abs_val(p);
    return p; }
int main() {
	double a,b,d=(b-a)/n;
	double sum=0;
	int n;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%d",&n);
	double t[n+1];
	for (i=0;i<=n;i++) {
	    t[i]=a+((b-a)/n)*i; }
	for(i=0;i<=n;i++) {
	    sum=sum+d*(f_x_g_x(t[i])); }
	printf("%0.4lf",sum);
	return 0; }