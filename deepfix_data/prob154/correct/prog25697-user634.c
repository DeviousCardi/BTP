#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double epsilon = 0.000001;
int main() {
	int n,x,i;
	float a,b;
	scanf("%f%f%d",&a,&b,&n);
	float s=0.0;
	for(i=0;i<n;i++) {
	    x=a+i*((b-a)/n);
	    if(x<=-1)
	        s=s+(b-a)/n;
	    else if(x>-1&&x<1)
	        s=s+x*x*(b-a)/n;
	    else if(x>=1)
	        s=s+(x*x*x*(b-a)/n); }
	printf("%.4f",s);
	return 0; }