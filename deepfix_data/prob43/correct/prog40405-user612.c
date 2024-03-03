#include <stdio.h>
#include <stdlib.h>
double absol(double y) {
    if(y>=0) {
        return y; }
    else {
        return -y; } }
double f(double x) {
    double val=0;
    val=-x*x+3*x;
    return val; }
double g(double x) {
    double val=0;
    val=2*x*x*x-x*x-5*x;
    return val; }
int main() {
    double a,b,area;
    int n,i;
	scanf("%lf%lf%d",&a,&b,&n);
	double x[n+1];
	for(i=0;i<n+1;i++) {
	    x[i]=a+(i*(b-a)/n); }
	area=0;
    for (i=0;i<n+1;i++) {
        area=area+(absol(f(x[i])-g(x[i])))*((b-a)/n); }
	    printf("%.4lf",area);
	return 0; }