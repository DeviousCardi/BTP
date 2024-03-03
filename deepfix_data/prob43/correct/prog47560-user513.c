#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	double a,b,x,area=0,p,da;
	scanf("%d%lf%lf",&n,&a,&b);
	for(x=a;x<=b;x++) {
	    p=-2*(x*x*x)+8*x;
	if (p>=0) {
	            da=p*((b-a)/n);
	            printf("%.4lf",da); }
	else {
	            da=-p*((b-a)/n);
	            printf("%.4lf",da); } } {
	         printf("%.4lf",area);
	         area=area+da; }
	return 0; }