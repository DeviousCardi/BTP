#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	double fx,gx,mod,a,b,x;
	float sum=0.0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    x=a+i*(a-b)/n;
	    fx=(-x*x)+3*x;
	    gx=(2*x*x*x)-x*x-5*x;
	    mod=(fx>gx)?(fx-gx):(gx-fx);
	    sum+=mod; }
	printf("%.6f",&sum);
	return 0; }