#include <stdio.h>
#include <stdlib.h>
double func(double x);
int main() {
	double a,b;
	int n,j,i;
	scanf("%lf\n%lf\n%d\n",&a,&b,&n);
	double area=0.0;
	int pnt[1000];
	for(i=0;i<=n;i++) {
	    pnt[i]=a+i*((b-a)/n); }
	for(j=0;j<n;j++) {
	    area=area+(func(pnt[j]))*(((double)(b-a))/n); }
	printf("%.4lf",area);
	return 0; }
double func(double x) {
    double p;
    if(x<=(-1))
    p=1;
    else {
        if((-1<x)&&(x<1))
        p=(x*x);
        else {
            if(x>=1)
            p=(x*x*x); } }
    return (p); }