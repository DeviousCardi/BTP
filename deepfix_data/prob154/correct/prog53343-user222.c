#include <stdio.h>
#include <stdlib.h>
double funct(double k) {
    if(k<=-1) {
        k=1; }
    else if(k>-1&&k<1) {
        k=k*k; }
    else {
        k=k*k*k; }
    return k; }
int main() {
	double a,b,x,area=0,i;
	int n;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	x=(b-a)/n;
	for(i=a;i<=b-x;i=i+x) {
	    area=area+funct(i)*x; }
	printf("%.4lf",area);
	return 0; }