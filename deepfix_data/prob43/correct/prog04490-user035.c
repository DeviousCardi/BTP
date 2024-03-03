#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	double fx,gx,dif,a,b,sum=0.0,x;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    x=a+i*(b-a)/n;
	    fx=(-x*x)+3*x;
	    gx=(2*x*x*x)-x*x-5*x;
	    dif=(fx>gx)?(fx-gx):(gx-fx);
	    sum+=(dif*(b-a)/n); }
	printf("%.4f",sum);
	return 0; }