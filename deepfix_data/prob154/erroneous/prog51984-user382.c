#include <stdio.h>
#include <stdlib.h>
const double epsilon = 0.000001;
double fx(double x) {
    if((x-epsilon<-1.0) {
        return 1.0; }
    else if(x+epsilon>1.0) {
        return (x*x*x); }
    else {
        return (x*x); } }
int main() {
	double a,b,dx=(b-a)/n,area=0.0;
	int n,i;
	scanf("%lf%lf%d",&a,&b,&c);
	for(i=0;i<=n-1;i++) {
	    area=area+fx(a+i*(b-a)/n)*dx; }
	printf("%.4lf",area);
	return 0; }