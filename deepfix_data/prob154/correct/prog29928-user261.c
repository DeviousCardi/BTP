#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b;int n;
	scanf("%lf %lf %d",&a,&b,&n);
	double dx;
	int i;double s=0,t,x;
	dx=(b-a)/n;
	for(i=0;i<n;i++) {
	    x=a+dx*i;
	    if(x<=-1)
	    t=1;
	    else if(x>-1 && x<1)
	    t=x*x;
	    else
	    t=x*x*x;
	    s=s+t*dx; }
	printf("%.4lf",s);
	return 0; }