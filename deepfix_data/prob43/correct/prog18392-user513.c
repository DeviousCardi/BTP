#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	double a,b,x,area,p;
	scanf("%d%lf%lf",&n,&a,&b);
	for(x=a;x>=a;x<=b)
	{p=-2*(x*x*x)+8*x;
	if (p>=0) {
	            area=p*((b-a)/n);
	            printf("%.4lf",area); }
	else {
	        area=-p*((b-a)/n);
	        printf("%.4lf",area); } }
	return 0; }