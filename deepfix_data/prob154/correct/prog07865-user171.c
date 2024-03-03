#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,x,area=0;
	int n,i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%n",&n);
	if(b<=-1)
	printf("%.4lf",(-1*(b-a)));
	else
	if(a>=1)
	    {   x=(b-a)/n;
	        for(i=a;i<=b;i+x) {
	                area=area+((i*i*i)*x); }
	        printf("%.4lf",area); }
	return 0; }