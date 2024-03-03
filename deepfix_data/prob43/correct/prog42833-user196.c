#include <stdio.h>
#include <stdlib.h>
double calc(double x) {
    double y1,y2;
    	y1=-x*x+3*x;
	y2=2*x*x*x-x*x-5*x;
	return y1-y2; }
int main() {
	double a,b,c,e;
	int n;
	scanf("%lf %lf %d",&a,&b,&n);
	double x, y1, y2;
	y1=-x*x+3*x;
	y2=2*x*x*x-x*x-5*x;
	double d[n+1];
	int i;
	for(i=0;i<n;i++)
	{c=i*(b-a);
	    d[i]=a+c/n; }
	double sum=0.0;
	for(i=0;i<n+1;i++) {
	    x=d[i];
	    e=calc (x);
	    if(e<0) {
	        e=-e; }
	    sum= sum+(e*((b-a)/n)); }
	printf("%.4f",sum);
	return 0; }