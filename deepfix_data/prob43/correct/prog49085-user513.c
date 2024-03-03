#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	double a,b,x,area,p;
	scanf("%d%lf%lf",&n,&a,&b);
	for(x=a;x<=b;x++) {
	    p=-2*(x*x*x)+8*x;
	if (p>=0) {
	            area=p*((b-a)/n);
	            printf("%.4lf",area); }
	else {
	            area=-p*((b-a)/n);
	            printf("%.4lf",area);
	     }area=area+1; }
	return 0; }