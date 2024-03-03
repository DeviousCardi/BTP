#include <stdio.h>
#include <stdlib.h>
const double eps = 0.000001
double f(double x){
    return (-(x*x)+(3*x)); }
double g(double x){
    return ((2*x*x*x)-(x*x)-(5*x)); }
double absval(double x){
    return (x>=0)?x:(-x); }
int main() {
	double a,b,area=0;
	int i,n;
	scanf("%lf %lf %d",&a,&b,&n);
	printf("%lf",absval(-5.32));
	return 0; }