#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
	double h(double x){return fabs(2*x*x*x-8*x);}
	double a,b,c;
	int n;
	c=(b-a)/n;
	double d[n+1];
	for (i=0;i<n+1;i++){
	    d[i]=a+(i*c); }
	double sum=0;
	for(j=0;j<n;j++){
	    sum=sum+c*(h(d[j])); }
	printf("%.4lf",sum);
	return 0; }