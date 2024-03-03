#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b;
	int n,c;
	scanf("%lf %lf %d",&a,&b,&n);
	double x, y1, y2;
	y1=-x*x+3*x;
	y2=2*x*x*x-x*x-5*x;
	double d[n+1];
	int i;
	for(i=0;i<n+1;i++) {
	    d[i]=a+((i*(b-a))/n); }
	double sum=0.0;
	for(i=0;i<n+1;i++) {
	    x=d[i];
	    c=y1-y2;
	    if(c<0) {
	        c=-c; }
	    sum= sum+(c*((b-a)/n)); }
	printf("%.4f",sum);
	return 0; }