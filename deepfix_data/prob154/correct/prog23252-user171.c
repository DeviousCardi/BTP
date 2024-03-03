#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,x,area=0,i;
	int n;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%n",&n);
	if(b<=-1)
	printf("%.4lf",(b-a));
	else
	if(a==b)
	printf("%.4lf",area);
	else
	if(a>=-1)
	    {   x=(b-a)/n;
	        for(i=a;i<=b;i=i+x) {
	                if(i<1)
	                area=area+(i*i*x);
	                else
	                if(i>=1)
	                area=area+(i*i*i*x); }
	        printf("%.4lf",area); }
	    return 0; }