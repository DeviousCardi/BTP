#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,d,x,f,s;
	int n,i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	d=(b-a)/n;
	for(i=0;i<n;i++) {
	    x=a+i*d;
	    if(x<=-1) {
	        f=1.0; }
	    else if(x>-1 && x<1) {
	        f=x*x; }
	    else {
	        f=x*x*x; }
	    s=s+f*d; }
	printf(".4lf",s);
	return 0; }