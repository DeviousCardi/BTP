#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b;
	int n,i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	double l=(b-a)/n;
	double x[n];
	for(i=0;i<n;i++)
	x[i]=a+i*(b-a)/n;
	double sum=0;
	double y;
	for(i=0;i<n;i++) {
	    if(x[i]<=-1) {
	        y=1; }
	    else if((x[i]>-1)&&(x[i]<1)) {
	        y=x[i]*x[i]; }
	    else {
	        y=x[i]*x[i]*x[i]; }
	    sum=sum+y*l; }
	printf("%.4lf",sum);
	return 0; }