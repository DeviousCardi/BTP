#include <stdio.h>
#include <stdlib.h>
double value(double);
int main() {
	double a,b,d,sum=0;
	int n,i;
	scanf("%lf%lf%d",&a,&b,&n);
	double x[n];
	x[0]=a;
	d=(b-a)/n;
	for(i=1;i<n;i++) {
	    x[i]=x[i-1]+d;
	    sum=sum+value(x[i])*d; }
	printf("%0.4lf",sum);
	return 0; }
double value(double v) {
    if(v<=(-1)) {
        return 1; }
    else if(v>(-1)&&v<1) {
        return v*v; }
    else {
        return v*v*v; } }