#include <stdio.h>
#include <stdlib.h>
int f(intx) {
    int x;
    if (x=10) {
     return x*x; }
     else return x*x*x; }
int main() {
	double a,b,total_area;
	int n,i,j;
	scanf("%lf %lf %d", &a,&b,&n);
	double x[n];
	x[0]=a;
	for (i=1; i<n; i++) {
	    x[i]=a + i*((b-a)/n); }
	x[n]=b;
	total_area=0;
	for (j=0; j<=n-1; j++) {
	    total_area=total_area + f(j) *( (b-a)/n ); }
	printf("f(10) ");
	printf("%0.4lf", total_area);
	return 0; }