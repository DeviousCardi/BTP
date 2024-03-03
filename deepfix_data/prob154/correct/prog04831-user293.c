#include <stdio.h>
#include <stdlib.h>
double func(double n) {
    if(n<=-1) return 1.0;
    else if((-1<n) && (n<1)) return (n*n);
    else return (n*n*n); }
int main() {
	double a,b,area=0.0;
	int n,i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	double delx=(b-a)/n;
	double x[n];
	x[0]=a;
	for(i=1;i<n;i++) {
	    x[i]=x[i-1]+delx; }
	for(i=0;i<n;i++) {
	    area=area+func(x[i])*delx;
	    printf("%lf\n",func(x[i])); }
    printf("%.4lf",area);
    return 0; }