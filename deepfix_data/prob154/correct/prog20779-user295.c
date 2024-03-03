#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,delta,fx,xn;
	int n,i;
	scanf("%lf%lf%d",&a,&b,&n);
	delta=(b-a)/n;
	xn=a;
	fx=0.0f;
	while(xn<=b){
	    if(xn<=-1)
	    fx+=(1*delta);
	    else if(xn>-1 && xn<1)
	    fx+=(xn*xn*delta);
	    else
	    fx+=(xn*xn*xn*delta);
	    xn+=delta; }
	printf("%.4lf",fx);
	return 0; }