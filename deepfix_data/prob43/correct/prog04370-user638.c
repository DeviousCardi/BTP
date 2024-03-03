#include <stdio.h>
double f(double x);
double g(double y);
double compute(double c,double d,long s);
int main() {
	double a,b,area;
	long n;
	scanf("%lf %lf %ld",&a,&b,&n);
	area=compute(a,b,n);
	printf("%.4lf",area);
	return 0; }
double f(double x) {
    double v;
    v=-1*x*x+3*x;
    return v; }
double g(double x) {
    double v;
    v=2*x*x*x-x*x-5*x;
    return v; }
double compute(double c,double d,long s) {
    double sub,v1,v2,ar=0,p;
    sub=(d-c)/s;
    long i;
    for(i=0;i<s;i++) {
        p=c+i*sub;
        v1=f(p);
        v2=g(p);
        if(v1>v2)
        ar=ar+(v1-v2)*sub;
        else
        ar=ar+(v2-v1)*sub; }
    return ar; }