#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
	double a,b,x,area=0;
	int n,i;
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
	                area=area+pow(i,2)*x);
	                else
	                if(i>=1)
	                area=area+pow(i,3)*x); }
	        printf("%.4lf",area); }
	    return 0; }