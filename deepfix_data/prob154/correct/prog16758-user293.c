#include <stdio.h>
#include <stdlib.h>
int func(int n) {
    if(n<=-1) return 1;
    else if((-1<n) && (n<1)) return (n*n);
    else return (n*n*n); }
int main() {
	double a,b,area;
	int n,i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	double delx=(b-a)/n;
	printf("%lf",delx);
	double x[n+1];
	x[0]=a;
	for(i=1;i<=n;i++) {
	    x[i]=x[i-1]+delx; }
	for(i=0;i<n;i++) {
	    area=area+func(x[i])*delx; }
    printf("%.4lf",area);
    return 0; }