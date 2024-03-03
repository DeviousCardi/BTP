#include <stdio.h>
#include <stdlib.h>
int f(intx) {
    int x;
    return x*x*x; }
int main() {
	double a,b,total_area;
	int n,i,j;
	scanf("%lf %lf %d", &a,&b,&n);
	double x[n];
	x[0]=a;
	for (i=1; i<n; i++) {
	    x[i]=x[0] + i*((b-a)/n); }
	x[n]=b;
	total_area=0;
	for (j=0; j<=n-1; j++) {
	    total_area=total_area + f(j) *( (b-a)/n ); }
	int k=f(8);
	printf("%d",k);
	printf("%0.4lf", total_area);
	return 0; }